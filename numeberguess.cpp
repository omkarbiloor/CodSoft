#include <iostream>
using namespace std;
int main()
{
    int wrongguess = 0, totalattempt = 0, correctguess = 0;
    cout << "Welcome To Number Guessing Game!" << endl;
    cout << "Rules" << endl;
    cout << "1.Enter Y for Yes and N for Exit from game" << endl;
    cout << "2.Guess Number Between 1 to 100" << endl;
    char rePlay;
    do
    {
        int user, random;
        cout << "Enter Guess Between 1 to 100" << endl;
        cin >> user;
        random = rand() % 100 + 1;
        if (user == random)
        {
            cout << "Congrats You Guessed Correct number" << endl;
            correctguess++;
        }
        else
        {
            cout << "Sorry You guessed wrong number Please try again" << endl;
            wrongguess++;
        }
        totalattempt++;
        cout << "Do you want to continue (Y/N)?" << endl;
        cin >> rePlay;
        cout << endl;
        if (rePlay != 'Y' && rePlay != 'N')
        {
            cout << "Invalid Input" << endl;
            break;
        }
    } while (rePlay != 'N');
    cout << "Your attempts:- " << totalattempt << endl;
    cout << "Your correct Guesses:- " << correctguess << endl;
    cout << "Your Wrong Guesses:- " << wrongguess << endl;
}