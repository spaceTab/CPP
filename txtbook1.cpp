#include <iostream>
#include <string>

using namespace std;

int main(){

  int age, months, weeks, days, hours, mins, secs;
  unsigned long long int milli;

  cout << "Enter your age" << '\n';
  cin >> age;

  months = age * 12;
  weeks = age * 48; 
  days = age * 365;
  hours = age * 60;
  mins = age * 365 * 24 * 60;
  secs = age * 365 * 24 * 60 * 60;
  milli = age * 365 * 24 * 60 * 60 * 1000;

  cout << "You're " << months << " months old \n";
  cout << weeks << " weeks old \n";
  cout << "& " << days << " days old \n";
  cout << "Your life in hours is: " << hours << "Hours " << endl;
  cout << "Your life in minutes: " << mins << " Minutes" << endl;
  cout << "your life in seconds: " << secs << " Seconds" <<endl;
  cout << "Your life in milli-seconds is: " << milli << " Milli seconds" << endl;

  cout << endl;


  return 0;
}
