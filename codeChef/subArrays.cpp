#include <bits/stdc++.h>
using namespace std;

long int SubArraySum(int arr[], int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[50], sa, i=0;
        cin >> sa;
        for(int i=0; i<sa; ++i)
            cin >> arr[i];

        int n=sizeof(arr)/sizeof(arr[0]);

        cout << "Sum of SubArray's is:"
             << SubArraySum(arr, arr[i]) << '\n';
    }
    return 0;
}

long int SubArraySum(int arr[], int n){
    long int result = 0;
    //Picking starting point
    for(int i=0; i<n;i++){
    //Picks ending point
        for(int j=i; j<n; j++){
    //Sum subarray between current
   //starting and ending points
            for(int k=i; k<=j; k++)
                result += arr[k];
        }
    }
    return result;
}
