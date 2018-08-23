#include <iostream>

using namespace std;

int main(){
    int i;
    cin>>i;
    while(i--){
        int j,sum=0;
        cin>>j;
        while(j!=0){
            sum=sum+(j%10);
            j=j/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
