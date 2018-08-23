#include <iostream>
#include <cstring>
#include <string>
//#include <iomanip>
#include <vector>
using namespace std;

//int accuracy(int x);

int main(){

    char cstr[]={'H','e','l','l','o','\0'};
    int count=0;


    cout << "Type in: " << cstr << endl;

    string test;
    cin >> test;

    if(test!=cstr)
        cout << "nope\n";
    else
        cout << "yup\n";

    //finding each inequality of strings, and the position of inequality
    //adds wrong characters to count
    for(int i=0; i<strlen(cstr); ++i)
        if(test[i]!=cstr[i]){
            cout << test[i] << " at position " << i+1 << '\n';
            count++;
        }
    cout << "Error amount: " << count << endl;
    double result;                                //calculation still prints 'gap'
    result = 100.0*((double)count/strlen(cstr)); //I.E if 60% accuracy outputs 40.
    result = 100.0-result;                      //solved by subtracting ouput by 100
    cout << result <<'%'<<" Accuracy" << endl;
    /*------------------------------------------------------------------------
    -------------------------Multi-word testing-----------------------------*/

    string STR="The quick brown fox jumps over the lazy dog";
    string tSTR; //input test string.
    cout << "Next Test string: " << STR << endl;
    count = 0; // re-iniatilize counter to 0.
    result = 0;
    cin.get();
    getline(cin, tSTR);

    for(int i=0; i<STR.size(); ++i)
        count++;
        if(tSTR[i] != STR[i]){
            cout << "Input was not correct \n";
            //cout << count++;
        }
        else
            cout << "String was CORRECT! \n";
    cout << "Errors found: " << count << '\n';
    result=100.0*((double)count/STR.length());
    result=100.0-result;
    cout << result << '%' << " Accuracy! \n";

    

    return 0;
}
