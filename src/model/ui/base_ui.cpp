#include <string>
#include <iostream>

class Base_UI
{
    public: 
        const void main_menu() 
        {
            std::cout << "-----------------------" << std::endl;
            std::cout << "This is the main menu" << std::endl;
            std::cout << "-----------------------" << std::endl;
            std::cout << "1) Enter Author menu  " << std::endl;
            std::cout << "2) DOES NOTHING" << std::endl;
            std::cout << "3) DOES NOTHING" << std::endl;
        }
        const void author_menu()
        {
            std::cout << "-----------------------" << std::endl;
            std::cout << "This is the author menu" << std::endl;
            std::cout << "-----------------------" << std::endl;
            std::cout << "1) Add author  " << std::endl;
            std::cout << "1) Edit author  " << std::endl;
            std::cout << "2) Delete author" << std::endl;
            std::cout << "2) \n\n" << std::endl;
            std::cout << "3) <----[ GO BACK ]" << std::endl;
        }
        // const void test_menu()
        // {
            
        // } 

};
