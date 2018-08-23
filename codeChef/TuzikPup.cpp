#include <bits/stdc++.h>

using namespace std;

int getSum(int x);

int main(){

    int t;

    std::cin >> t;
    while(--t){

        for (int i=0; i<t; i++){
            int d,n,s;
            std::cin>>d>>n;
            for(int j=1; j<=d;j++){
                n=getSum(n);
            }
            std::cout << "this is N:" << n << std::endl;
        }
    }
    return 0;
}

int getSum(int x){
    int c=0;
    for (int k=1;k<=x;k++)
        //c = (c*(c+1))/2;
        c=c+k; //c+=k;
    return c;
}


//Working Solution For :: https://www.codechef.com/problems/PPSUM/
/* #include <bits/stdc++.h>
using namespace std;
int func(int x){
    int s=0;
    for(int k=1;k<=x;k++)
    s=s+k;

    return s;
}
int main() {
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
	  int d,n;
	  cin>>d>>n;
	  for(int j=1;j<=d;j++){
	       n=func(n);
	  }
	  cout<<n<<"\n";

	}

	// your code goes here
	return 0;
}*/
