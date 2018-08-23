#include <iostream>
//FIXME :: https://www.codechef.com/problems/SUBINC
using namespace std;

int main(){
    int t, add, mult;
    cin >> t;
    while(t--){
        int n, j, k, i, count=0;
        cin >> n;
        int arr[n];
        for(i=0; i<n; ++i){
            cin >> arr[i];
        }

        for(i=0; i<n; i++){
            add=0;mult=1;
            for(j=i; j<n; j++){
                add+=arr[j];
                mult*=arr[j];
                if(add == mult)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
