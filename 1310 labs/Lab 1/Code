// ECE 1310-04
// Author: Jordan Xu
// Description: display number of seconds to hours, minutes and seconds
// Date: 2/17/2021
#include <iostream>
using namespace std;
int main() // convert seconds to hours, minutes and seconds
{
  int x;
  cout << "Input time in seconds: ";
  cin >> x;
  int hours = x / 3600;
  cout << "Hours: " << hours << endl;
  cout << "Minutes: " << x / 60 - hours * 60 << endl;
  cout << "Seconds: " << x % 60 << endl;
  return 0;
}

//////////////////////////////////////////////////////////////////////

// Description: display number of Fahrenheit to Celsius and vise versa
// Date: 2/17/2021
#include <iostream>
using namespace std;
int main() // converting Fahrenheit to Celsius and vise versa
{
  double x;
  cout << "Input degrees Fahrenheit= ";
  cin >> x;
  cout << "Celsius= " << (x - 32) * 5 / 9 << endl;
  double y;
  cout << "Input degrees Celsius= ";
  cin >> y;
  cout << "Fahrenheit= " << y * 9 / 5 + 32 << endl;
  return 0;
}

//////////////////////////////////////////////////////////////////////

// Description: display number of cents to quarters, dimes, nickels, and pennies
// Date: 2/17/2021
#include <iostream>
using namespace std;
int main() // convert pennies to change
{
  int x;
  cout << "number of pennies: ";
  cin >> x;
  int quarters = x/25;
  int dimes = (x - quarters * 25) / 10;
  int nickels = (x - (quarters * 25) - (dimes * 10)) / 5;
  cout << "Quarters= " << quarters << endl;
  cout << "Dimes= " << dimes << endl;
  cout << "Nickels= " << nickels << endl;
  cout << "Pennies= " << x % 5 << endl;
  return 0;
}
