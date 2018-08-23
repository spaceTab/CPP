#include <bits/stdc++.h>

using namespace std;

int main(){

    long int t, mod, num;
    int counter=0, rem;
    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> num;
        counter = 0;
        do {
            rem = num%10;
            num /= 10;
            if(rem == 4)
                counter++;
        }while(num != 0);

        cout << counter << endl;
    }
    return 0;
}
