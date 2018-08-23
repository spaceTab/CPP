#include <iostream>
#include <istream>
#include <string>
#include <cstring>

using namespace std;

int main(){

    string S1 = "Hello";
    string S2 = "Goodbye, I love pie";
    string test1, test2;
    char c1[]={'c','s','t','r','i','n','g','\0'};
    char ctest;

    cout << "You Test string is: " << S1 << '\n';
    cout << "The second test string is: " << S2 << '\n';

    cout << "Enter string one \n";
    cin >> test1;

    if(test1 == S1)
        cout << "\nString one is Correct!\n";
    else
        cout << "\nString one is Incorrect \n";

    cout << "Enter string two \n";
    cin.get();
    getline(cin, test2);

    if (test2 == S2)
        cout << "\nString two is Correct! \n";
    else
        cout << "\nString two is Incorrect \n";
    if (test1 == S1 && test2 == S2)
        cout << "\nBoth strings are correct\n";
    else
        cout << "\nNope\n";

    cout << "Third string is: " << c1 << endl;
    cin >> ctest;

    for(int i=0; i < c1.size(); ++i){
        if(ctest == c1)
            cout << "\nCorrect\n";
        else
            cout << "\nIncorrect\n";
    }
}
