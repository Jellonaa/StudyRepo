#include "game.h"

Game::Game(int max)
{
    maxNumber = max;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    time_t t = time(nullptr);
    srand(t);
    randomNumber = rand()%maxNumber+1;
    numOfGuesses = 0;
    bool menu = true;

    while (menu == true) {

        cout << "Give your guess between 1-"<< maxNumber << endl;
        cin >> playerGuess;

        if (playerGuess == randomNumber) {
            cout << "Your guess is right = " << randomNumber << endl;
            numOfGuesses++;
            printGameResult();
            menu = false;
        }
        if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
            numOfGuesses++;
        }
        if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
            numOfGuesses++;
        }
    }
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
