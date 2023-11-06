#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char playAgain;

    do {
        int random = rand() % 100 + 1;
        int num;

        cout << "Guess The Number Between 1-100" << endl;

        do {
            cin >> num;

            if (num < 1 || num > 100) {
                cout << "Please enter a number between 1 and 100." << endl;
            } else if ((num - random) >= 10) {
                cout << "The number guessed is too high. Try again." << endl;
            } else if ((random - num) >= 10) {
                cout << "The number guessed is too low. Try again." << endl;
            } else if (num > random) {
                cout << "The number guessed is a bit high. Try again." << endl;
            } else if (num < random) {
                cout << "The number guessed is a bit low. Try again." << endl;
            }
        } while (num != random);

        cout << "YOU GUESSED IT RIGHT :)" << endl;

        cout << "Want to play again? (y/n)" << endl;
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
