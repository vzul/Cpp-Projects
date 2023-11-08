#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int> (time(0)));
    int secretNumber = rand () %100 +1;
    int tries = 0;
    int guess;

    cout <<"\Welcome to Guess My Number\n\n";

    do {
        cout <<"Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber) {
                cout <<"Too high!";
        } else if (guess < secretNumber) {
                cout <<"Too low!";
        } else {
            cout <<"\n That's it! You got it in "<<tries<< " guesses! \n";
        }


    } while (guess != secretNumber);
}
