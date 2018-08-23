#include <iostream>
#include <vector>
using namespace std;

//func prototype.
int fearFactorial(int n);

int main(){

    int n;

    cout << "DEEEEEJAAAY KHAAAALiDDDDD \n";
    cout << "They don't want you to enter a number\n";
    cin >> n;
    cout << "We gonna win more with factorials like this: \n";
    cout <<fearFactorial(n)<< endl;


    return 0;
}

int fearFactorial(int n){
    int sum = 1;

    for (int i = 1; i <= n; ++i){
        sum *= i;
        if (i != n){
            cout << i << "*";
        }
    }
    return sum;
}
