#include <iostream>
/* Code Chef Link *s
** https://www.codechef.com/problems/INTEST **
*/

using namespace std;

int main(){
                                            //stores N in a array as limit
    int n, k, sol = 0;
    long long array[1000000];
    cin >> n >> k;                        //reads input of n as amount
                                         //reads in k as Number 'divisor'

    for (int i=0; i<n; ++i){               //adds to array til reaching limit of N
        cout << "Enter array \n";
        cin >> array[i];                   //specified # of inputs
        if (array[i] % k == 0){           //Checks array elements, Divides by K(the divisor)
            sol++;                       //incr. correct answer to sol (solution)
        }
    }
    cout << endl << sol << endl;
    return 0;
}




                                                    /*    int n, k;

                                                        cin >> n >> k;
                                                        int sol = 0;

                                                        for (int i=0; i<n; ++i){
                                                            int t;
                                                            cin >> t;
                                                            if (t % k == 0){
                                                                sol++;
                                                            }
                                                        }
                                                        cout << endl << sol << endl;*/
