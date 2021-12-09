#include<vector>
#include<iostream>
#include<string>
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


void print_dialog(){
    std::vector<std::string> dialog_entries{
        "Add Value",
        "Print First Value",
        "Print Last Value",
        "Print All Values",
        "Shuffle",
        "Throw away last Value",
        "Multiply all by Integer"
    };
    for(std::size_t i = 0, e = dialog_entries.size(); i != e; ++i){
        std::cout << i+1 << ") " << dialog_entries.at(i) << std::endl;
    }
    std::cout << "0) Quit" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Select option to continue: ";
}


void mainLoop(std::vector<int>& internal_container){
    for(;;){                                        /////an dieser Stelle auch while(1) oder while(true)
        namespace vf = vectorfunctions;
        int option;
        std::cout << "Willkommen zum Vector-Demonstrator" << std::endl;
        print_dialog();
        std::cin >> option;
        switch(option){
            default:    std::cout << "unknown command" << std::endl;    break;
            case 1:     vf::add_value(internal_container);                  break;
            case 2:     vf::print_first(internal_container);                break;
            case 3:     vf::print_last(internal_container);                 break;
            case 4:     vf::print_all(internal_container);                  break;
            case 5:     vf::shuffle(internal_container);                    break;
            case 6:     vf::delete_last(internal_container);                break;
            case 7:     vf::multiply(internal_container);                   break;
            case 0:     return;};
        };

}


int main (){
    std::vector<int> container{1,2,3,4};
    mainLoop(container);
}