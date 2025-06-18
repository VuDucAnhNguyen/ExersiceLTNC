#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

bool ktra (int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    return (x1+w1>x2)
           &&(x2+w2>x1)
           &&(y1-h1<y2)
           &&(y2-h2<y1);
}

int main (){
    int k; cin >>k;
    vector <vector<int>> a(k, vector<int> (4));
    for (int i=0; i<k;i++){
        for(int j=0;j<4;j++){
            cin >> a[i][j];
        }
    }
    int ans=0;
    int mostcollisions=0;
    for (int i=0;i<k;i++){
        int dem=0;
        int j = 0;
        while (j<k){
            if(j!=i&&ktra (a[i][0],a[i][1],a[i][2],a[i][3],a[j][0],a[j][1],a[j][2],a[j][3])){
                dem++;
            }
            j++;
        }
        if (dem>mostcollisions){
            mostcollisions=dem;
            ans=i;
        }
    }
    cout <<ans+1;
}
