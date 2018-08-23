#include <bits/stdc++.h>
using namespace std;

int main(){

    int c1=100001, c2=100001, c3=100001;
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    for(int i=0; i<n;i++){
        int t;
        cin >> t;
        if(t==1)
            c1=min(c1, arr[i]);
        else if(t==2)
            c2=min(c2, arr[i]);
        else if(t==3)
            c3=min(c3, arr[i]);
    }
    cout << min(c1+c2,c3);
    return 0;
} 
