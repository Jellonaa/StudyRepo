#include "chefs.h"

ItalianChef::ItalianChef(string n)
{

    name = n;
    cout << "Chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName()
{
    return name;
}
