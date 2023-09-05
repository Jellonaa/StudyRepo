#include <iostream>
#include <cstdlib>
#include <ctime>
#include "declarations.h"

using namespace std;

int game(int maxnum) {
    time_t t = time(nullptr);
    srand(t);
    int number = rand()%maxnum+1;
    int guess;
    int counter = 0;

    cout << "Guess a number between 1-"<< maxnum << endl;

    while (true) {

        cin >> guess;

        if (guess == number) {
            cout << "Correct!" << endl;
            counter++;
            return counter;
        }
        if (guess > number) {
            cout << "Too high!" << endl;
            counter++;
        }
        if (guess < number) {
            cout << "Too low!" << endl;
            counter++;
        }
    }
}
