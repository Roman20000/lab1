//program to enter a temperature in celcius and converting it into fahrenheit

//including library
#include <iostream>

using namespace std;

//including the function

int main() {

//declaring the variables 

float b;

//asking for a value
cout << "Please enter a temperature in celcius:" ;

//reading the variable
cin >> b;
cout << "The value you entered is " << b;

//preforming the calculation 
cout << " and its value in fahrenheit is " << (b*1.8)+32 << "c" << ".\n";

//end
return 0;
}
