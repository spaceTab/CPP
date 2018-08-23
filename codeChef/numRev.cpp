#include <iostream>

using namespace std;

int main(){

    int t, n, reversed = 0, remains;

    cin >> t;
    while (t){
        cin >> n;
        while (n > 0){

        remains = n%10;
        n = n/10;
        reversed = reversed*10 + remains;

    }
        cout << reversed << endl;
        reversed = 0;
        --t;
    }


    return 0;
}
