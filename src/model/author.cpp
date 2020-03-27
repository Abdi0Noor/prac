#include <iostream>
#include <string>
#include "author.h"

using namespace std;

Author::Author(string new_name, int new_id)
{
    this->name = new_name;
    this->id = new_id;
}

Author::~Author(){}

void Author::set_name(string n)
{
    this->name = n;
}
string Author::get_name()
{
    return(name);
}

void Author::set_id(int i)
{
    this->id = i;
}
int Author::get_id()
{
    return(id);
}
