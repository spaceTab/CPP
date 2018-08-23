#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, counter;
        cin >> x;
        if ( x%5 == 0 ){
            if( x%2 == 0 )
            cout << "0" << endl;
        else
            cout << "1" << endl;
        }
        else
            cout << "-1" << endl;



    }


    return 0;
}
