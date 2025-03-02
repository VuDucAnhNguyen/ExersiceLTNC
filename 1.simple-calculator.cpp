#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

double maytinh (double , char , double );
double maytinh (string , double );

int main (int argc, char*argv[]){
    if (argc==4){
        double x=atof(argv[1]);
        double y=atof(argv[3]);
        char op=argv[2][0];
        cout << fixed << setprecision(2)<<maytinh(x, op, y);
    }
    if (argc==3){
        string op=argv[1];
        double n=atof(argv[2]);
        cout << fixed << setprecision(2)<<maytinh(op, n);
    }
    return 0;
}

double maytinh (double x, char op, double y){
    if(op=='+'){
        return x+y;
    }
    if(op=='-'){
        return x-y;
    }
    if(op=='/'){
        if(y==0){
            cout <<"Invalid divisor\n";
            exit(1);
        } else {
            return x/y;
        }
    }
    if (op=='%'&&(int)x==x&&(int)y==y){
        if(y==0){
            cout <<"Invalid divisor\n";
            exit (1);
        } else {
            return (int)x%(int)y;
        }
    }
    cout <<"Invalid operator\n";
    exit(1);
}

double maytinh (string op, double n){
    if (op=="cos"){
        return cos(n);
    }
    if (op=="sqrt"){
        return sqrt(n);
    }
    if (op=="sin"){
        return sin(n);
    }
    cout <<"Invalid operator\n";
    exit(1);
}
