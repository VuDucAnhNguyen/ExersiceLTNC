#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void separate (int n, int temp, int start, int &way){
    if (temp==n){
        way++;
        return;
    } else if (temp>n){
        return;
    } else {
        for(int i=start;i<=n;i++){
            separate(n, temp+i, i+1, way);
        }
    }
}


int main (){
    int n; cin >>n;
    int temp=0, way=0, start=1;
    separate(n, temp, start, way);
    cout <<way;
}
