#include <iostream>
#include <vector>

using namespace std;

void BinarySearch (const vector <int>&a, int findnum, int first, int last){
    int mid= (first+last)/2;
    if (first>last){
        cout <<"not found";
        return;
    } else if(a[mid]==findnum){
        cout <<"index "<<mid;
        return;
    } else if (a[mid]>findnum){
        BinarySearch(a, findnum, first, mid-1);
    } else {
        BinarySearch(a, findnum, mid+1, last);
    }
}

int main (){
    int n; cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int findnum; cin>>findnum;
    BinarySearch(a, findnum, 0, n-1);
}

/*
Thuật toán:
-Nhận vào 1 mảng có n phần tử đã được sắp xếp tăng dần, số cần tìm.
-Hàm BinarySearch nhận vào mảng, số cần tìm, chỉ số phần tử đầu và cuối
+Nếu chỉ số phần tử đầu lớn hơn chỉ số phần tử cuối => số không tồn tại, kết thúc tìm kiếm
+Nếu phần tử ở chỉ số giữa đầu và cuối bằng số cần tìm => in ra chỉ số của phần tử cần tìm, kết thúc tìm kiếm
+Nếu phần tử ở chỉ số giữa lớn hơn số cần tìm, gọi đệ quy BinarySearch với chỉ số phần tử cuối là chỉ số phần tử giữa -1
+Nếu phần tử ở chỉ số giữa bé hơn số cần tìm, gọi đệ quy BinarySearch với chỉ số phần tử đầu là chỉ số phần tử giữa +1
*/
