#include "chefs.cpp"

int main()
{
    Chef Kokki = Chef("Janne");
    Chef Kok = Chef("Joku");
    ItalianChef Pizza = ItalianChef("Luigi",250,100);
    Kokki.makeSalad();
    Kokki.makeSoup();
    Kok.makeSalad();
    cout << Pizza.getName() << endl;
    Pizza.makePasta();
    return 0;
}
