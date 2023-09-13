#include "chefs.h"

Chef::Chef(string n)
{
    name = n;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}

ItalianChef::ItalianChef(string n,int j,int v) : Chef(n)
{
    name = n;
    jauhot = j;
    vesi = v;
}

ItalianChef::~ItalianChef()
{

}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}

string ItalianChef::getName()
{
    return name;
}
