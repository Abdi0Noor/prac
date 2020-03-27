#include <iostream>
#include <string>
#include <fstream>
#include "model/author.cpp"
#include "model/ui/base_ui.cpp"
using namespace std;
void print_greeting ()
{
    Base_UI my_ui;
    my_ui.main_menu();
    auto input = 0;

    std::cin >> input;
    std::cout << input << ": input" <<std::endl;
    if (input == 1) { return my_ui.author_menu();}
    if (input == 2) { std::cout << "you pressed 2";}

    return;

    // Author my_author("jeff", 17);
    // std::ofstream my_file;
    // my_file.open("author.txt");


    // std::cout << "This is a basic app" << std::endl;
    // my_file << "\n" << endl;
    // my_file << "Name: " + my_author.get_name() + " | ID: " + std::to_string(my_author.get_id()) << std::endl;
    // my_file.close();
}

int main ()
{
    print_greeting();
    return 0;
}
