#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();
    virtual ~Asunto();
    void maarita(int,int);
    double laskeKulutus(double);
    int asukasMaara;
    int neliot;
};

class Kerros
{
public:
    Kerros();
    virtual ~Kerros();
    Asunto * as1;
    Asunto * as2;
    Asunto * as3;
    Asunto * as4;
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);
};

class Katutaso:public Kerros
{
public:
    Katutaso();
    virtual ~Katutaso();
    Asunto * as5;
    Asunto * as6;
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
    Katutaso * eka;
    Kerros * toka;
    Kerros * kolmas;
};

#endif // ASUNTO_H
