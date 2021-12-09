#ifndef VECTORHELPER_HPP
#define VECTORHELPER_HPP

#include<vector>
#include<iostream>
#include<algorithm>
#include<random>


namespace vectorfunctions{
    void add_value(std::vector<int>& container){
        int input{};
        std::cout << "Which Integer should be added? ";
        std::cin >> input;
        container.push_back(input);
    }

    void print_first(std::vector<int>& container){
        std::cout << *container.begin() << std::endl;
    }
    void print_last(std::vector<int>& container){
        std::cout << container.back() << std::endl;
    }
    void print_all(std::vector<int>& container){
        std::cout << "Print all the numbers!" << std::endl;
        for(auto i: container) std::cout << i << ", ";
        std::cout << std::endl;
    }
    void shuffle(std::vector<int>& container){
        std::cout << "\033[1;41;30mShuffle!\033[0m" << std::endl;
        auto rng = std::default_random_engine{};
        std::shuffle(std::begin(container), std::end(container), rng);
    }
    void delete_last(std::vector<int>& container){
        std::cout << "Throw away last element!" << std::endl;
        container.pop_back();
    }
    void multiply(std::vector<int>& multiplicands){
        int multiplier{};
        std::cout << "Which Integer to multiply? ";
        std::cin >> multiplier;
        std::transform(multiplicands.begin(), multiplicands.end(), multiplicands.begin(),
            [multiplier](int single_multiplicand)->int {return single_multiplicand * multiplier;});
    }
}

#endif