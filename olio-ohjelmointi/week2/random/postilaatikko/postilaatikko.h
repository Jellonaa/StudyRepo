#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H
#include <iostream>

using namespace std;

class Postilaatikko
{
public:
    Postilaatikko(); // muodostin = constructor
    ~Postilaatikko(); // tuhoaja = destructor

    void lisaaPosti(int);
    void otaPosti(int);
    void asetaNimi(string);


    string nimi;


private:
    int maara;

protected:
    string osoite;
};

#endif // POSTILAATIKKO_H
