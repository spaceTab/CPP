#include <iostream>
//https://www.codechef.com/submit/FLOW004

using namespace std;

int main(){
    int t, first, last;
    long long n;

    cin >> t;
    while (t--){
        cin >> n;
        first = n;
        last = n % 10;   //returns remainder.
        while ( n >= 10){
            n /= 10;    //
        }
        first = n%10;
        //cout << first << last << endl;
        cout << first + last << endl;
    }
    //n = 0;
    return 0;
}
