/*
 * Guessing Game
 * Author: Pujan Patel
 * To create a standard repeatable Guessing Game
 */
#include <iostream>
using namespace std;

int main() 
{
    //Initialize Variables
    srand(time(NULL));
    int randomInt = rand()%100;//Random Int
    int guess = 0;//Player guess
    char option = ' ';//Continue?
    bool running = true;//Game Status
    int counter = 0;//turns
        
    while(running == true)//while running, take input and compare
    {
        cout << "please input a number between 0-100" << endl;
        cin >> guess;//input
        counter++;
        if(guess > randomInt)//guess too high?
        {
            cout << "Your guess is too high" << endl;
        }
        else if(guess < randomInt)//guess too low
        {
            cout << "Your guess is too low" << endl;
        }
        else//congrats, continue?
        {

            cout << "Correct! It took you " << counter << " guesses. Would you like to play again (y/n)" << endl;
            counter = 0;
            cin >> option;
            if(option == 'y')//if continue, reset randint
            {
                randomInt = rand()%100;
            }
            else//exit loop
            {
                running = false;
            }
        }
    }
    return 0;
}
