#include <iostream>
using namespace std;

int main(){

    int t, b;

    cin >> t;
    while(t--){
        cin >> b;
        int ans=0;
        for(int j=2; j<b; j+=2){
            ans += (b-j)/2;
        }
        cout << ans << endl;

    }
    return 0;
}
