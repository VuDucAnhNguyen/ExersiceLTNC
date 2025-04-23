#include <iostream>
#include <vector>

using namespace std;

int findArea (int i, int j, int n, vector <vector <int >> a, vector <vector <bool>> visited){
    if (i<0||j<0||i>=n||j>=n||visited[i][j]==true||a[i][j]==1){
        return 0;
    }

    visited[i][j]=true;
    int area=1;

    area+=findArea (i+1,j, n, a, visited);
    area+=findArea (i-1,j, n, a, visited);
    area+=findArea (i,j+1, n, a, visited);
    area+=findArea (i,j-1, n, a, visited);
    return area;
}

int main (){
    int n;
    cin >>n;
    vector <vector <int>> a(n, vector<int>(n));
    vector <vector<bool>> visited(n, vector<bool>(n,false));
    for (int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }
    int maxarea = 0;

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int current = findArea(i, j, n , a, visited);
            if (current>maxarea){
                maxarea=current;
            }
        }
    }

    cout <<maxarea;




}
