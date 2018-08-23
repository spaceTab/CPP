#include <iostream>
#include <iomanip> // for set precision

using namespace std;

int main(){

  int withdraw;
  double balance = 200.00, tax = 0.50;
  char again;

  cout << "---------------------" << endl;
  cout << "|Welcome to the ATM |\n";
  cout << "---------------------" << endl;
  do {
    cout << "How much would you like to withdraw \n";
    cin >> withdraw;

   if (withdraw % 5 != 0) {   //makes sure WD is multiple of 5;
      cout << "Withdrawals must be made in multiples of 5 \n";
      cout << endl;
      cout << "Would you like to try again? \n";
      cin >> again;
 } else if (withdraw > balance) {
      cout << "You don't got the loot for that dawg \n";
      balance = balance;
      cout << "You balance total is " << balance << endl;
      cout << "Would you like to try again?";
      cin >> again;
 } else {
      balance -= withdraw + tax;
      cout << "You've withdrawn: ";
      cout << setprecision(2) << fixed << withdraw << endl;
      cout << "Your balance is now: " << balance << endl;
      cout << "Would you like to make another withdrawal?";
      cin >> again;
  }
} while (again == 'y', 'Y');

  return 0;
}
