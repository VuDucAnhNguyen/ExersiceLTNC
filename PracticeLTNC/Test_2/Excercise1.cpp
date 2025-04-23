#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    int n; cin >>n;
    vector <int> a(n);
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int length = 1;
    for (int i=0;i<n-1;i++){
        if (a[i]%2==a[i+1]%2){
            length++;
        } else {
            cout<<length<<" ";
            length=1;
        }
    }
    cout << length;
}
