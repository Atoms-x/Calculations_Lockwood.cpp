/*
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (McMillanite): Chet Lockwood
  IDE: Repl.it
  This is a program to write arithmatic to variables and use if statements
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
//Variable declaration and initilization
double number1 = 0.0, number2 = 0.0;
int number3 = 0, number4 = 0;
double addition = 0.0, subtraction = 0.0;
double multiplication = 0.0, division = 0.0;
int modulus = 0;

//Variable declaration and initilization for colors
string cRed = "\033[1;91m";
string cGreen = "\033[1;92m";
string cYellow = "\033[1;93m";
string cBlue = "\033[1;97m\033[44m";
string cReset = "\033[0m";

//Input: Prompt the user for number 1 and validate for double
cout << cGreen << "Please enter Number 1 \n" << cReset << endl;
number1 = validateDouble(number1);

//Input: Prompt the user for number 2 and validate.  Also, ensure it is not 0
while (number2 == 0.0)
{
  cout << cGreen << "\nPlease enter Number 2 (cannot be 0) \n" << cReset << endl;
  number2 = validateDouble(number2);

  if (number2 == 0.0)
  {
    cout << cRed << "\nPlease enter a number other than 0 \a" << cReset << endl;
  }
}

//Input: Prompt the user for numer 3 and validate
cout << cGreen << "\nPlease enter Number 3 \n" << cReset << endl;
number3 = validateInt(number3);

//Input: Prompt the user for number 4 and validate.  Also, ensure it is not 0
while (number4 == 0)
{
  cout << cGreen << "\nPlease enter Number 4 (cannot be 0) \n" << cReset << endl;
  number4 = validateInt(number4);

  if (number4 == 0)
  {
    cout << cRed << "\nPlease enter a number other than 0 \a" << cReset << endl;
  }
}

//Process and Output
addition = number1 + number2;
cout << cYellow << "\nAdding Number 1 and Number 2 is: " << cBlue << addition 
  << cReset << endl;

subtraction = number1 - number2;
cout << cYellow << "\nSubtracting Number 1 and Number 2 is: " << cBlue << subtraction 
  << cReset << endl;

multiplication = number1 * number2;
cout << cYellow << "\nMultiplying Number 1 and Number 2 is: " << cBlue << multiplication
  << cReset << endl;

division = number1 / number2;
cout << cYellow << "\nDividing Number 1 and Number 2 is: " << cBlue << division
  << cReset << endl;

modulus = number3 % number4;
cout << cYellow << "\nThe remainder of Number 3 into Number 4 is: " << cBlue << modulus 
  << cReset << endl;

  return 0;
}
