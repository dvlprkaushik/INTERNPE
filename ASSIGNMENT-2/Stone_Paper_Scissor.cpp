#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char playerComputer()
{
    // R -> Rock
    // P -> Paper
    // S -> Scissors
    int play;
    // To generate random number between 0-2
    srand(time(NULL));
    play = rand() % 3;
    if (play == 0)
    {
        return 'R';
    }
    else if (play == 1)
    {
        return 'P';
    }
    else
    {
        return 'S';
    }
}

int compVsUser(char comp, char user)
{
    // computer vs user playing conditions
    if ((comp == 'R' && user == 'P') ||
        (comp == 'P' && user == 'S') ||
        (comp == 'S' && user == 'R'))
    {
        return 1;
    }
    else if (comp == user)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void winner(char comp, char user)
{
    int result = compVsUser(comp, user);
    if (result == -1)
    {
        cout << "Computer won.\nYou Lose" << endl;
    }
    else if (result == 1)
    {
        cout << "You won.\nComputer Lose" << endl;
    }
    else
    {
        cout << "Draw!!" << endl;
    }
}

// Main function
int main()
{
    char comp;
    string userName;
    char theUser;
    cout << "Computer : Welcome to Rock, Paper, Scissors game!!" << endl;
    cout << "Computer : What is your name? " << endl;
    cout << "User : ";
    cin >> userName;
    cout << "Computer : Welcome " << userName << " Let's start the game -> " << endl;

    do
    {
        cout << "_Enter :\n'R' for Rock_\n'P' for Paper_\n'S' for Scissors\n'E' for Exit_" << endl;
        cout << "Enter choice : ";
        cin >> theUser;
        cout << "\n";
        if (theUser == 'E')
            break;

        comp = playerComputer();
        cout << userName << " : " << theUser << endl;
        cout << "Computer : " << comp << endl;
        winner(comp, theUser);
        cout << "\n";
    } while (theUser != 'E');

    return 0;
}