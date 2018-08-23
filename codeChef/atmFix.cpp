#include <iostream>

using namespace std;

int main(){

  int w;
  float b;
  cin>>w;
  cin>>b;
  	if(w%5==0&&b>(w+0.50))
  	 cout<<b-(w+0.50);
  	else
  	 cout<<b;
  return 0;
}
