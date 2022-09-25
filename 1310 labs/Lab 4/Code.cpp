// ECE 1310-04
// Author: Jordan Xu
// Description: determining resistance of a band
// Date: 4/9/2021
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int assignCode(char);
int resistance(int, int, int);
int main()
{
  int code1, code2, code3, count;
  code1 = code2 = code3 = 0;
  char currentband;
  cout << "Input three codes: ";
  for (count = 1; count <= 3; count++)
  {
    cin >> currentband;
    switch (count)
    {
      case 1: code1 = assignCode(currentband);
      case 2: code2 = assignCode(currentband);
      case 3: code3 = assignCode(currentband);
    }
  }
  if (code1 < 0 || code2 < 0 || code3 < 0)
    cout << "Invalid" << endl;
  else cout << "Resistance in Ohms: " << resistance(code1, code2, code3) << endl;
  return 0;
}

int assignCode(char x)
{
  int code;
  x = toupper(x); //capitalizes it in code
  switch (x)
  {
    case 'B': code = 0; break;
    case 'N': code = 1; break;
    case 'R': code = 2; break;
    case 'O': code = 3; break;
    case 'Y': code = 4; break;
    case 'G': code = 5; break;
    case 'E': code = 6; break;
    case 'V': code = 7; break;
    case 'A': code = 8; break;
    case 'W': code = 9; break;
    default: code = -1; //makes it invalid
  }
  return code;
}

int resistance(int band1, int band2, int band3)
{
  int variable1 = static_cast<int>(pow(10, band3));
  return (band1 * 10 + band2) * variable1;
}

////////////////////////////////////////////////////////////////////////////

// Description: finding value of sin and cos with degree 0 to 360
// Date: 4/9/2021
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
const double pi = 3.141592653589793238;
void chart();
double Sin(int), Cos(int);
int main()
{
  chart();
  return 0;
}

void chart()
{
  cout << fixed << setprecision(4);
  cout << "Degree" << setw(14) << "Sin " << setw(14) << "Cos" << endl;
  //setw for spacing
  for (int deg = 0; deg <= 360; deg += 10)
  {
    cout << deg << setw(18) << Sin(deg) << setw(18) << Cos(deg) << endl;
    //setw(18) gives formatting issue but fixable with if else statements
  }
}

double Sin(int x)
{
  return sin(x * pi / 180);
}

double Cos(int x)
{
  return cos(x * pi / 180);
}
