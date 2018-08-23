#include <bits/stdc++.h>

/* https://www.codechef.com/problems/CCOOK */

using namespace std;


int main(){
    int n;
    cin >> n;
    while(--n){
        int a[5], tot=0;
        for(int i=0; i<5; i++){
            cin >> a[i];
            if(a[i] == 1)
                tot++;
            }

            if (tot == 0){
                cout << "Beginner \n";
            }
            else if (tot == 1){
                cout << "Junior Developer \n";
            }
            else if (tot == 2){
                cout << "Middle Developer \n";
            }
            else if (tot == 3){
                cout << "Senior Developer \n";
            }
            else if (tot == 4){
                cout << "Hacker \n";
            }
            else
                cout << "Jeff Dean \n";
            }
        }
    return 0;
}
