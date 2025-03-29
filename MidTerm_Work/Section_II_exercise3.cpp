#include <iostream>
#include <vector>

using namespace std;

int main (){
    int n; cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

/*
Ưu điểm:
    Dễ cài đặt và hiểu
    Hoạt động tốt với các mảng nhỏ hoặc gần như được sắp xếp (vì số vòng lặp sẽ giảm nếu không có hoán đổi xảy ra)

Nhược điểm:
    Hiệu suất chậm với các mảng lớn (độ phức tạp thời gian là O(n^2))
    Chậm hơn Selection Sort và Insertion Sort trong 1 số TH
    Số lượng hoán đổi lớn, làm chậm quá trình nếu mảng chưa được sắp xếp
*/
