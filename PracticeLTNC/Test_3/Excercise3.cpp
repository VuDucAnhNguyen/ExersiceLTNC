#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool inrec (vector <int> rec, vector <int> valuesquare){
    return rec[0]<=valuesquare[0]&& rec[0]+rec[2]>=valuesquare[0] &&
           rec[1]<=valuesquare[1]&& rec[1]+rec[3]>=valuesquare[1];

}



int main (){
    int m, n , q, k; cin >>m>>n>>q>>k;
    vector <vector<int>> valuequare (q, vector<int>(3));
    vector <vector<int>> rec(k, vector<int>(4));
    for (int i=0;i<q;i++){
        for (int j =0 ; j<3;j++){
            cin >>valuequare[i][j];
        }
    }
    for (int i=0;i<k;i++){
        for (int j =0 ; j<4;j++){
            cin >>rec[i][j];
        }
    }
    int maxvalue=0;
    for (int i=0; i<k;i++){
        int sum =0;
        for(int j=0;j<q;j++){
            if(inrec(rec[i], valuequare[j])){
                sum+=valuequare[j][2];
            }
        }
        if (sum>maxvalue){
            maxvalue=sum;
        }
    }
    cout << maxvalue;
}
