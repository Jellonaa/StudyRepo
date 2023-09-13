#ifndef CHEFS2_H
#define CHEFS2_H
#include "chefs.h"

class ItalianChef:public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    void makePasta();
    string getName();
private:
    //int vesi;
    //int jauhot;
};


#endif // CHEFS2_H
