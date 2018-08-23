#include <bits/stdc++.h>

/* https://www.codechef.com/problems/CCOOK */

using namespace std;


int main(){

    int cont;

    int sol = 0, tot;
        cin >> cont;

        for (int i=0; i <= cont; ++i){
            cin >> sol;
            for (int j=5; j<=5; --j){
                tot = 0;
                sol += tot;
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
            else if (tot == 5){
                cout << "Jeff Dean \n";
            }
        }
    return 0;
}
