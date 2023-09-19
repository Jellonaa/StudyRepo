#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();
    ~Asunto();
    void maarita(int,int);
    double laskeKulutus(double);
    int asukasMaara;
    int neliot;
};

class Kerros
{
public:
    Kerros();
    ~Kerros();
    Asunto as1,as2,as3,as4;
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
};

class Katutaso:public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    Asunto as1,as2;
    void maaritaAsunnot();
    double laskeKulutus(double);
};

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka,kolmas;
};

#endif // ASUNTO_H
