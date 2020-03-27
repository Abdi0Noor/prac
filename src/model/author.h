#include <string>
#include <iostream>
using namespace std;

#ifndef AUTHOR_H
#define AUTHOR_H

class Author
{
    private:
        string name = "";
        int id = 0;
    public:
        Author(string name, int id);
        ~Author();
        void set_name (string n);
        string get_name ();
        void set_id (int new_id);
        int get_id ();
};

#endif
