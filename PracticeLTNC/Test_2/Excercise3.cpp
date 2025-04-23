#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

string deCode(string s){
    string result;
    int i=0;
    while (i<s.length()){
        if ('0'<=s[i]&&s[i]<='9'){
            int countnumber = 0;
            while (i<s.length()&&'0'<=s[i]&&s[i]<='9'){
                countnumber=countnumber*10+(s[i]-'0');
                i++;
            }
            if (i<s.length()){
                for(int j=0;j<countnumber;j++){
                    result+=s[i];
                }
                i++;
            }
        } else {
            result+=s[i];
            i++;
        }
    }
    return result;
}

int main (){
    string s; cin >>s;
    cout << deCode(s);
}

