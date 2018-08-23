#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, can, sim;
    cin >> t;
    while(t--){
        cin >> n;

        sim = 0;
        while(n--){
            cin >> can;
            sim += can % 2;
        }
        if (sim % 2 == 1)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
    return 0;
}
