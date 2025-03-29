#include <iostream>
#include <vector>

using namespace std;

int sumarround (int m, int n, const vector <vector<int>>&a, int x, int y){
    int sum=0;
    for(int i=-1; i<2;i++){
        for(int j=-1;j<2;j++){
            if(x+i>=0&&x+i<m&&y+j>=0&&y+j<n&&i!=0&&j!=0){
                sum+=a[x+i][y+j];
            }
        }
    }
    return sum;
}

int main (){
    int m, n, k ,q; cin>>m>>n>>k>>q;
    vector <vector<int>> board(m, vector<int>(n,0));
    int x, y, v;
    for(int i=0;i<k;i++){
        cin >>x>>y>>v;
        board[x][y]=v;
    }
    for (int i=0;i<q;i++){
        cin>>x>>y;
        cout <<sumarround(m, n, board, x, y)<<endl;
    }

}


