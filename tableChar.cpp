/*Simple Program Created April, 17th, 2018
**Idea from Programming Principles - C++
**Jacob Plaisted
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    char l;

    for(char l = 'a'; l <= 'z'; ++l){            //iterates through alphabet 'a'-'z'
            cout << l << " " << ++a << endl;    //adds one to a
        }                                      //Creates table output linking
                                              //letter to number (a 1, b 2, ETC)
    return 0;
}
