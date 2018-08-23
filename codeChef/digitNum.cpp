#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string bin;
        cin >> bin;
        int one = 0, zero = 0;
        for (int i=0; bin[i]; i++){
            if( bin[i]=='1' )
                one++;
            else if( bin[i]=='0')
                zero++;
        }
        if ( one == 1 || zero == 1)
            cout << "Yes \n";
        else
            cout <<"No \n";
    }
    return 0;
}
