#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char S1[10000], S2[10000];
        cin >> S1 >> S2;
        int len=strlen(S1), k=0, j=0;
        for(int i=0; i<len;++i){
            if(S1[i] != S2[i] && S1[i]!= '?' && S2[i] != '?'){
                k++;
            }
            if(S1[i]!= S2[i] || (S1[i]=='?' && S2[i]=='?')){
                j++;
            }
        }
        cout << j << " " << k << endl;
    }
}
