#include <iostream>
using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){
        int n, x, y;
        cin >> n;
        int sum=0;
        for (int i=1; i<=n; ++i){
            cin >> x >> y;          //reads in x and y
            sum ^= i; 
        }
        cout << sum << endl;




    }


    return 0;
}
