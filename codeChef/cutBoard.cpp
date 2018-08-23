#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;

    cin >> t;
    while(t--){
        int rows, columns, ans;
        cin >> rows >> columns;

        ans=((rows*columns)-(rows+columns))+1;

        cout << ans << endl;
    }

    return 0;
}
