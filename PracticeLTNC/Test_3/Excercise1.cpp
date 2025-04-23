#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool snt (int n){
    if (n<2){
        return false;
    }
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}



int main (){
    int l, r; cin>> l>>r;
    int countsnt = 0;
    for (int i= l; i<=r;i++){
        if (snt(i)){
            countsnt++;
        }
    }
    cout << countsnt;

}

