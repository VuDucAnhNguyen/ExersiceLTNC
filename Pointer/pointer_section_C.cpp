#include <iostream>
using namespace std;

void reverseFunc(char []);
int strlenCustom(char []);
void delete_char (char [], char );
void pad_right (char [], int);
void pad_left (char [], int);
void truncate (char [], int);
bool is_palindrome(char []);
void trim_left(char []);
void trim_right(char []);

int main (){
    int n=5;
    char c = 'o';
    char a[] = "Hello World!______";
    //reverseFunc(a);
    //delete_char (a,c);
    //pad_right (a,n);
    //pad_left (a,n);
    //truncate (a,n);
    //trim_left(a);
    //trim_right(a);
    cout <<a<<endl;
    cout << is_palindrome(a);
}

int strlenCustom (char a[]){
    int length =0;
    while (*(a+length)!='\0'){
        length++;
    }
    return length;
}

void reverseFunc(char a[]){
    int length =strlenCustom(a);
    for (int i=0;i<=length/2;i++){
        char temp = a[i];
        a[i]=a[length-1-i];
        a[length-1-i]=temp;
    }
}

void delete_char (char a[], char c){
    int length =strlenCustom(a);
    for (int i=0;i<length;i++){
        if (a[i]==c){
            for (int j=i;j<length;j++){
                a[j]=a[j+1];
            }
            i--;
            length--;
        }
    }
}

void pad_right (char a[], int n){
    int length=strlenCustom(a);
    if (length<n){
        for (int i=length;i<n;i++){
            a[i]=' ';
        }
    }
    a[n]='\0';
}

void pad_left (char a[], int n){
    int length=strlenCustom(a);
    if (length<n){
        for (int i=n-1;i>=(n-length);i--){
            a[i]=a[i-(n-length)];
        }
        for (int i=0;i<n-length;i++){
            a[i]=' ';
        }
    }
    a[n]='\0';
}

void truncate (char a[], int n){
    int length =strlenCustom(a);
    if (length>n){
        a[n]='\0';
    }
}

bool is_palindrome(char a[]){
    int length =strlenCustom(a);
    for (int i=0;i<=length/2;i++){
        if (a[i]!=a[length-i-1]){
            return false;
        }
    }
    return true;
}

void trim_left(char a[]){
    int length = strlenCustom(a);
    int num=0;
    while(a[num]==' '){
        num++;
    }
    for (int i=0;i<length;i++){
        a[i]=a[num+i];
    }
    a[length-num]='\0';
}

void trim_right(char a[]){
    int length=strlenCustom(a);
    int index=length-1;
    while(a[index]=='_'){
        index--;
    }
    a[index+1]='\0';
}
