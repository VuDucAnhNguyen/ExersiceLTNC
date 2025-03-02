#include <iostream>
using namespace std;

int startnum = 1, endnum =100;
void printAnswer (int, int);

int main (){
    char player;
    printAnswer(startnum, endnum);
    return 0;
}

void printAnswer (int startnum, int endnum){
    if (startnum>endnum){
            cout <<"Your number is not exist.";
            exit(0);
        }
    int mid=(startnum+endnum)/2;
    cout<<"Your number is "<<mid<<", isn't it? (</>/=)"<<endl;
    char player;
    cin >>player;
    while (player!='='&&player!='>'&&player!='<'){
        cout <<"Invalid operator!\n";
        cin>>player;
    }
    if (player=='='){
        cout <<"I won!!!";
        exit(0);
    } else if (player=='>'){
        startnum=mid+1;
        printAnswer(startnum, endnum);
    } else if (player=='<'){
        endnum=mid-1;
        printAnswer(startnum, endnum);
    }

}

