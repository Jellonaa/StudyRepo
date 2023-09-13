#ifndef CHEFS_H
#define CHEFS_H
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};

class ItalianChef:public Chef
{
public:
    ItalianChef(string,int,int);
    ~ItalianChef();
    void makePasta();
    string getName();
private:
    int vesi;
    int jauhot;
};

#endif // CHEFS_H
