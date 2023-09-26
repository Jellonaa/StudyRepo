#include "asunto.cpp"

int main()
{
    Kerrostalo * kt;
    kt = new Kerrostalo;
    kt->laskeKulutus(1);
    delete kt;
    kt = nullptr;
    return 0;
}
