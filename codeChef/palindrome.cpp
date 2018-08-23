#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, num, remains;
    //int reversed = 0;
    cin >> t;
    while (t--){
        int reversed = 0;
        cin >> n;
        num = n;
        while (n != 0){

            reversed = reversed*10+n%10; //reverses number
            n /= 10;

        }
        if (num == reversed)
            cout << "Wins \n";
        else
            cout << "Loses \n";

    }
    return 0;
}
