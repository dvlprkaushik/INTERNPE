#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Main Function
int main()
{

    // Random number generator
    srand(time(0));
    // Generate a random number between 1 to 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess a Number game!\n";
    cout << "I have chosen a number between 1 and 100. Can you guess it ? \n";

    // Loop to execute
    do
    {
        cout << "Enter Your guess : ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low ! Try again \n";
        }
        else if (guess > secretNumber)
        {
            cout << "Too high ! Try again \n";
        }
        else
        {
            cout << "Congratulations You guessed the number " << secretNumber << " correctly!\n";
            cout << "It took you " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}