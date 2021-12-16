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


void mainLoop(vectorfunctions::awesome_vector_t& container){
    for(;;){                                        /////an dieser Stelle auch while(1) oder while(true)
        int option;
        std::cout << "Willkommen zum Vector-Demonstrator" << std::endl;
        print_dialog();
        std::cin >> option;
        switch(option){
            default:    std::cout << "unknown command" << std::endl;    break;
            case 1:     container.add_value();                          break;
            case 2:     container.print_first();                        break;
            case 3:     container.print_last();                         break;
            case 4:     container.print_all();                          break;
            case 5:     container.shuffle();                            break;
            case 6:     container.delete_last();                        break;
            case 7:     container.multiply();                           break;
            case 0:     return;};
        };

}


int main (){
    vectorfunctions::awesome_vector_t container{};
    mainLoop(container);
}