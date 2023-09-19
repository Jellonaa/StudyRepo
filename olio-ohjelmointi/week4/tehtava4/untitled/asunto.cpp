#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;
    cout << "Asunto maaritetty asukkaita=" << asukasMaara << " nelioita=" << neliot << endl;
}

double Asunto::laskeKulutus(double h)
{
    return asukasMaara*neliot*h;
}

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double h)
{
    double Kulutus = as1.laskeKulutus(h) + as2.laskeKulutus(h) + as3.laskeKulutus(h) + as4.laskeKulutus(h);
    return Kulutus;
}

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();

}

double Katutaso::laskeKulutus(double h)
{
    double Kulutus = Kerros::laskeKulutus(h) + as1.laskeKulutus(h) + as2.laskeKulutus(h);
    return Kulutus;
}


Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double h)
{
    double Kulutus = eka.laskeKulutus(h)+toka.laskeKulutus(h)+kolmas.laskeKulutus(h);
    cout << "Kerrostalon kulutus on " << Kulutus << endl;
    return Kulutus;
}
