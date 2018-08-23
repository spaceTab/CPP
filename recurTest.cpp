#include <iostream>
#include <vector>
using namespace std;

//func prototype.
int factorial(int n);
int fearFactorial(int k);

int main(){

    int n, k,s;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    cout << "ANOTHER ONE - dj Khalid \n";
    cin >> k;
    cout << "They don't want you to know the factorial of: " << k << endl;
    cout << fearFactorial(s);

    return 0;
}

int factorial(int n){
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
    }

int fearFactorial(int k){
    int s = 0;

    if (k == 0){
        return 1;
    }else{
        s = fearFactorial(k-1);
        //cout << s;
        s += k;
    }
    return s;
}
