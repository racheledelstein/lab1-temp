//Exercise 2.1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int secret_num = 1+(rand()%100); //generate a random number within RAND_MAX
    cout << "Guess the secret number by inputting an integer between 1 and 100" << endl;
    int input=0;
    int x=0;

    while (x<=5) // limit the user to 5 chances
    {
        cin>>input;
        x=x+1;

        if (x==5)
        {
            cout << "You lose" << endl;
            break; // terminate program
        }

        else if (input<secret_num)
        {

            cout << "Guess higher" << endl;
        }

        else if (input>secret_num)
        {
            cout << "Guess lower" << endl;
        }

        else if (input==secret_num) // user wins
        {
            cout << "You win" <<endl;
            break; //terminate program
        }
    }

    return(0);
}


