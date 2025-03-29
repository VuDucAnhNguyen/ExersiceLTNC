#include <iostream>
#include <vector>

using namespace std;

int main (){
    int n; cin>>n;
    vector <int> a(n);
    for (int i=0; i<n;i++){
        cin >>a[i];
    }
    int sum; cin >>sum;
    for (int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
}


