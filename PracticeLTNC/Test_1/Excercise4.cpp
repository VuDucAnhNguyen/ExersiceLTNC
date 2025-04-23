#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

bool ktra (char x, string s){
    int n = s.length();
    for (int i=0; i<n ;i++){
        if (s[i]==x){
            return false;
        }
    }
    return true;
}

void create (int n, int k, vector <char>& a, string s, int &countcout){
    if (countcout>=100){
        return;
    }
    if (s.length()==k){
        for (int i = 0; i < k; ++i) {
            cout << s[i] << ' ';
        };
        cout <<endl;
        countcout++;
    } else {
        for(int i=0; i<n;i++){
            if (ktra(a[i],s)){
                s=s+a[i];
                create (n, k , a , s, countcout);
                s.pop_back();
            }
        }
    }
}

int main (){
    int n , k;
    cin >>n >>k;
    vector <char> a(n);
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.rbegin(),a.rend());
    string s="";
    int countcout =0;
    create(n , k, a, s, countcout);
}
