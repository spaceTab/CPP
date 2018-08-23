#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;
    while (t--){
        int n, i;
        long long f = 1;

        cin >> n;
        for (i = 1; i <= n; ++i){
            f *= i;
        }
        cout << f << endl;
    }


    return 0;
}
