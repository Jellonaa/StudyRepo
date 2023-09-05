#include <iostream>
#include <cstdlib>
#include <ctime>
#include "declarations.h"

using namespace std;

int main()
{
    int counter = game(40);
    cout << "Guesses to reach the answer : " << counter << endl;
    return 0;
}
