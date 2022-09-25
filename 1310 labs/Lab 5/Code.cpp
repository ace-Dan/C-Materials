// ECE 1310-04
// Author: Jordan Xu
// Description: calculating resistances of a circuit
// Date: 5/2/2021
#include <iostream>
using namespace std;
void resitiveNetwork(int, int&, double&);
void invalidSection();
void flushBuffer();
static bool start = false; //understand purpose but not how it works
int main()
{
  int selection = 0, Rin; //Integer pair, initialize selection to zero to get into the while loop.
  double Req = 0; //Initialize to zero in case the user wants to end the program
  while (selection != -1) // ends calculation if enter -1
  {
    cout << "<Selection> <Resistor Value>: ";
    cin >> selection;
    resitiveNetwork(selection, Rin, Req);
  }
  return 0;
}

void resitiveNetwork(int option, int& R, double& Rtot)
{
  switch (option) // determines if invalid, starting resistor, series, or parallel
  {
    case 0: // initial resistor
    if (start == false)
    {
      cin >> R;
      if (cin) // Checks for invalid values for R, e.g. $, %, etc.
      {
        Rtot = R;
        start = true;
      }
      else
        invalidSection();
    }
    else
      invalidSection();
    break;
    case 1: // series
    if (start)
    {
      cin >> R;
      if (cin) // Checks for invalid values
        Rtot += R;
      else
        invalidSection();
    }
    else
      invalidSection();
    break;
    case 2: // parallel
    if (start)
    {
      cin >> R;
      if (cin) // Checks for invalid values
        Rtot = Rtot * R / (Rtot + R); // uses previous resistor
      else
        invalidSection();
    }
    else
      invalidSection();
    break;
    case -1:
      cout << "The program has ended!" << endl;
      cout << " Req = " << Rtot << " Ohms" << endl;
    break;
    default: invalidSection();
  }
  // In case of invalid resistor value, flush cin buffer
  flushBuffer(); // this is black magic
}

void invalidSection()
{
  cout << "Invalid selection" << endl;
}

void flushBuffer() // lost a brain cell here
{
  cin.clear(); // Clear cin flag
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush cin buffer
}
