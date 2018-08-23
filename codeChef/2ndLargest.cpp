#include <iostream>
using namespace std;

int main(){
    int t;

    cin >> t;
    while (t--){
        unsigned long long int a, b, c;
        cin >> a >> b >> c;

        if ((a > b && a < c) || (a < b && a > c)){
            cout <<"A:" << a << " Is second largest" << endl;
        }
        else if ((b > a && b < c) || (a > b && b > c)){
            cout <<"B:" << b << " Is second largest" << endl;
        }
        else if ((c > a && c < b) || (a > c && c > b)){
            cout <<"C:" << c << " Is second largest" << endl;
        }
    }
    return 0;
}
