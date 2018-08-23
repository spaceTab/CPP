#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, k, t, sol=0;

    cin >> n >> k;

    for (int i=0; i<n; ++i){
        cin >> t;
        if (k % t == 0){
            ++sol;
        }
    }
    cout << endl << sol << endl;
    return 0;
}
