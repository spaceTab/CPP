#include <iostream>
#include <string>

using namespace std;


//fruit Classes
class Fruits{

private:

public:
    int id, add;
    Fruits(){
        cout << "Default constuctor call \n";
        id = -1;
    }
    Fruits(int x){
        cout << "Paratmetrized constuctor called: \n";
        id = x;
    }
    string fruitColor;
    string fruitName;
    int weight;

    void printName(){
        cout << "The " << fruitName << "'s Info: \n";
    }

    void fruitInfo(){
        cout << "Fruit Color is: " << fruitColor << "\n";
        cout << "Fruit weight is: " << weight << "\n";

    }
    int addFruits(int add){
        cin >> add;
        cout << "Added: " << add << " " << fruitName << "'s" << endl;
    }


};

int main(){

    int add;

    Fruits banan;
    cout << "Banan code set to default " << banan.id << endl;
    banan.fruitName = "Banan";
    banan.fruitColor = "Yellar";
    banan.weight = 0.5;
    banan.printName();
    banan.fruitInfo();

    cout << endl;

    Fruits mango(102);
    cout << "Mango code is: " << mango.id << endl;
    mango.fruitName = "Mango";
    mango.fruitColor = "redish";
    mango.weight = 1;
    mango.printName();
    mango.fruitInfo();

    cout << endl;

    Fruits apple(103);
    cout << "Apple code is: " << apple.id << endl;
    apple.fruitName = "Apple";
    apple.fruitColor = "Red";
    apple.weight = 1.3;
    apple.printName();
    apple.fruitInfo();
    apple.addFruits(add);


    return 0;
}
