#include <iostream>
#include <cstring>
using namespace std;


int main(){

    char carr[] = {'p','o','i','n','t', '\0'};
    char *poi = carr;

    char charr[] = {'h','i', '\0'};
    char* point = poi;
    //char &point;

    int x = 4;
    int y = 3;
    int yx = x*y;
    int z = x*x;
    int& b = yx; //changes the memory address
    //int *c = z;

    cout << z << " " << yx << " " << b << endl;
    //cout << c << endl;
    cout << poi   <<" Without Pointer \n";
    cout << *poi  << " With Pointer \n";
    cout << &carr << " Memory address of carr \n";
    cout << point << endl;

    for (int i=0; i < strlen(carr); ++i){
        for (int j=0; j < i; ++j)
        //    cout << &carr[i] << endl;
        cout << &carr[i] << endl;
    }
    cout << "\a" << "\a" << "\a" << "\a" << endl;
}
