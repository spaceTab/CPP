#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    string str;

    cin >> T;

    while(T--){
        unsigned int sum=0, find=0;
        cin >> str;
        for(int i=0; i<str.length(); ++i){
            if(isdigit(str[i])){
                find=str[i]-48;
                sum += find;
            }
        }
        cout << sum << endl;
    }


}
