/*https://www.codechef.com/problems/CIELRCPT*/
           //Link to challenge. . . .
#include <bits/stdc++.h>
using namespace std;

long int One(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int p;
        cin >> p;
        if(p<=2048)
            cout << One(p) << '\n';
        else
            cout << p/2048+One(p%2048) << '\n';


    }
    return 0;
}

long int One(long long int n){
    long long int counter=0;
    while(n>0){
        if(n%2==1)
            counter++;
        n/=2;
    }
    return counter;
}
