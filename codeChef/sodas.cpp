#include <iostream>
#include <iomanip>    //for setprecision
using namespace std;

int main() {

  int soda;
  int sodaAMNT;           //adds the price of each soda purchased.
  double totalCost;      //totals
  double cost = 1.50;   //cost of soda

do {
  cout << "What soda would you like \n";
  cout << "1: Root Beer \n";
  cout << "2: Orange \n";
  cout << "3: Grape \n";
  cout << "4: Cola \n";
  cout << "5: Stella Artois \n";
  cin >> soda;

    switch(soda) {
      case 1:
        cout << "Dropping Root Beer" << endl;
        cout << setprecision(2) << fixed << cost << endl;
        sodaAMNT += 1;
      break;
      case 2:
        cout << "Dropping Orange soda" << endl;
        cout << "That will cost: " << setprecision(2) << fixed << cost << endl;
        sodaAMNT += 1;
      break;
      case 3:
        cout << "Dropping one Grape soda" << endl;
        cout << "That will cost: " << setprecision(2) << fixed << cost << endl;
        sodaAMNT += 1;
      break;
      case 4:
        cout << "Dropping Cola" << endl;
        cout << "That will cost: " << setprecision(2) << fixed << cost << endl;
        sodaAMNT += 1;
      break;
      case 5:
        cout << "Dropping stella" << endl;
        cout << "That will cost: " << setprecision(2) << fixed << cost << endl;
        sodaAMNT += 1;
      break;
      case 6:
        cout << "Thank you, Cum again" << endl;
      break;
      default:
        cout << "You fucked up, try again \n";
      break;
    }
    //cout << endl;
    totalCost = sodaAMNT * cost;
    cout << setprecision(2) << fixed << totalCost << endl;
    cout << endl;
  } while(soda != 6);
 return 0;
}
