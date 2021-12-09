#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<random>
#include"vectorfunctions.hpp"

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