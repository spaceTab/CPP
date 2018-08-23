#include <iostream>

using namespace std;

int main(){
                        //Programs checks for test cases & adds a w/ B
    int a, b, t;

    cin >> t;
    while (t){       //Puts in loop for amount of 'test cases'
        int s = 0;
        cin >> a >> b;      //input a & b
        s = a + b;          // s eq to a + b
        cout << s << endl;
        --t;                //decrements T
    }

    return 0;
}
