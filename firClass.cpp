#include <iostream>
#include <string>

using namespace std;

class JakeClass{

    public:             //axis specifier -- allows for use outside of class
        void coolSaying(){
            cout << "THEY DONT WANT YOU TO WIN - Dj Khalid \n";
        }

};
//wrong way to use variables in class
class wrongClass{
    public:
        string name; //making class varaibles pub. NOT GOOD PRACTICE
                    //Make them private
    private:

};
//right way
class rightClass{
    public: //making functions pub allows for access to the private.
        rightClass(string z){       //adding constructer.
            setName(z);
        }                                              //usually to give var an init. value
        void setName(string x){ //gets var from priv. function
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};





int main(){
                           //JakeObject - the key to acessing whatsinside class
    JakeClass JakeObject; //makes the object so it knows what class to use.
    JakeObject.coolSaying();

    wrongClass secObject;
    secObject.name = "Second Class / wrong way"; //access variables in
    cout << secObject.name << endl;

    rightClass classObject;
    classObject.setName("Sire Jook");


    //constructor object

    return 0;
}
