// ECE 1310-04
// Author: Jordan Xu
// Description: average of 3 exam scores and grade
// Date: 2/17/2021
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  double x, y, z, avg;
  bool x1, y1, z1; // true or false statement
  cout << fixed << showpoint << setprecision(2);
  cout << "Enter 3 exam scores ranging from 0-100 and separate it by a space: " << endl;
  cin >> x >> y >> z;
  x1 = (0 <= x && x <= 100) ? true : false;
  y1 = (0 <= y && y <= 100) ? true : false;
  z1 = (0 <= z && z <= 100) ? true : false;
  avg = (x + y + z) / 3;
  if (x1 && y1 && z1) // making sure scores are valid
  {
    if (avg >= 90.0)
    {
      cout << "Average: " << avg << endl;
      cout << "Grade: A" << endl;
    }
    else if (80.0 <= avg && avg < 90.0)
    {
      cout << "Average: " << avg << endl;
      cout << "Grade: B" << endl;
    }
    else if (70.0 <= avg && avg < 80.0)
    {
      cout << "Average: " << avg << endl;
      cout << "Grade: C" << endl;
    }
    else if (60.0 <= avg && avg < 70.0)
    {
      cout << "Average: " << avg << endl;
      cout << "Grade: D" << endl;
    }
    else
    {
      cout << "Average: " << avg << endl;
      cout << "Grade: F" << endl;
    }
    cout << endl;
  }
  else
    cout << "Invalid Scores" << endl;
    return 0;
}

///////////////////////////////////////////

// Description: display number of Fahrenheit to Celsius and vise versa
// Date: 2/17/2021
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int year;
  bool isLeap;
  cout << "enter year to determine leap or not leap year" << endl;
  cin >> year;
  //shortest code
  // isLeap = !(year % 4 ? (!(year % 100) ? (!(year % 400) ? true : false ) : true ) : false;
  if (!(year % 4)) //!0 means true
    if (!(year % 100))
      if (!(year % 400))
        isLeap = true;
      else
        isLeap = false;
    else
      isLeap = true;
  else
    isLeap = false;
  if (isLeap)
    cout << year << "\t" << "Leap Year" << endl;
  else
    cout << year << "\t" << "NOT a Leap Year" << endl;
  return 0;
}
