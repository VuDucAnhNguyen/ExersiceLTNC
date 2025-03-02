#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printAnswer (int, int, int&);
int generateNumber ();
int getPlayerNumber ();
void GuessIt();

int main (){
    char again;
    do {
        GuessIt();
        do {
            cout <<"Do you want play again?(Y/N) ";
            cin >>again;
        } while (again!='Y'&&again!='N');
    } while (again=='Y');
    return 0;
}

void printAnswer (int number, int secret, int &guesstime){
    if (number<secret){
        cout <<"Your number is too small.\n";
        cout <<"Your guess time: "<<++guesstime<<endl;
    } else if (number>secret){
        cout <<"Your number is too big.\n";
        cout <<"Your guess time: "<<++guesstime<<endl;
    } else {
        cout <<"Congratulation! You win.\n";
        cout <<"Your guess time: "<<++guesstime<<endl;
        cout <<"Your point: "<<100-guesstime<<endl;
    }
}

int getPlayerNumber (){
    int n;
    cout <<"Guess your number(1-100): ";
    cin >>n;
    return n;
}

int generateNumber (){
    int random = rand() % 100 + 1;
    return random;
}

void GuessIt(){
    srand(time(0));
    int number, guesstime=0;
    int secret = generateNumber ();
    do {
        number = getPlayerNumber();
        printAnswer(number,secret,guesstime);

    } while (number!=secret);
}
