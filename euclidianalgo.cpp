#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b);      //function prototype.
int gcdExtended(int a, int b, int *x, int *y);
int main(){

//euclidian algorthim examples
//definition - GCD of two numbers is the largest number that divides
//both of them. Simple way to find the GCD is to factorize both numbers
//multiplying there common factors

    int thirtysix = 2*2*3*3;
    int sixty = 2*2*3*5;
    cout << thirtysix << '\n' << sixty << '\n';

//Basic euclidian algo for GCD
//subtracting smaller numbers from larger. doesn't change GCD
//so we continue to subtracting repeatedly the larger of the two, we
//end up with GCD
//-------------------------------------------------------------------
//instread of subtracting we divide using a recursive function that
//stops when the condition of zero is met. SEE FUNCTION BELOW

                //driver to test below function.
    int a = 10, b = 15;
    printf("GCD(%d, %d) = %dn", a, b, gcd(a, b)); //%d for conversion of
    a = 35, b = 10;                              //int to decimal
    printf("GCD(%d, %d) = %dn", a, b, gcd(a, b));
    a = 31, b = 2;
    printf("GCD(%d, %d) = %dn", a, b, gcd(a, b));

    cout << endl;

    a = 25, b = 45;
    cout <<"a is:" << a << " "
         <<"b is:" << b << " GCD:"
         << gcd(a, b) << endl;

    a = 21, b = 16;
    cout << gcd(a, b) << endl;

    a = 30, b = a - 3;
    cout << gcd(a, b) << endl;
    cout << endl;

    a = 5;
    b = a * 5;
    cout << b << " is B -- GCD is:" << gcd(a, b) << endl;
    cout << endl;

                    //EXTENDED VERSION
        //Extended algorthim also finds int. coefficents x and y
        // such that ax + bx = gcd(a, b);
    /*cout << "Extended version of Euclid's algorthm \n";

    int x, y;
    int a = 35, b = 15;
    int g = gcdExtended(a, b, &x, &y);
    //cout << "GCD: " << gcdExtended(a, b, g);
    printf("gcd(%d, %d) = %d", a, b, g);*/

    return 0;
}

//Recursive C function to evaluate GCD using Euclid's algo.
//Returns GCD of a and b;
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int gcdExtended(int a, int b, int *x, int *y){
    //Base Case
    if(a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1; //stores results of recursive call.
    int gcd = gcdExtended(b%a, a, &x1, &y1);

    //update of X and Y using results of recursive call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;

}
