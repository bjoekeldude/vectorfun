#include"vectorfunctions.hpp"
#include<iostream>
#include<random>
#include<vector>
#include<algorithm>


namespace vectorfunctions{
    void awesome_vector_t::add_value(){
        int input{};
        std::cout << "Which Integer should be added? ";
        std::cin >> input;
        _container.push_back(input);
    }

    void awesome_vector_t::print_first(){
        std::cout << *_container.begin() << std::endl;
    }
    void awesome_vector_t::print_last(){
        std::cout << _container.back() << std::endl;
    }
    void awesome_vector_t::print_all(){
        std::cout << "Print all the numbers!" << std::endl;
        for(auto i: _container) std::cout << i << ", ";
        std::cout << std::endl;
    }
    void awesome_vector_t::shuffle(){
        std::cout << "\033[1;41;30mShuffle!\033[0m" << std::endl;
        auto rng = std::default_random_engine{};
        std::shuffle(std::begin(_container), std::end(_container), rng);
    }
    void awesome_vector_t::delete_last(){
        std::cout << "Throw away last element!" << std::endl;
        _container.pop_back();
    }
    void awesome_vector_t::multiply(){
        int multiplier{};
        std::cout << "Which Integer to multiply? ";
        std::cin >> multiplier;
        std::transform(_container.begin(), _container.end(), _container.begin(),
            [multiplier](int single_multiplicand)->int {return single_multiplicand * multiplier;});
    }
}