// program to convert temperature in fahrenheit to celcius

//including library
#include <iostream>

using namespace std;

//including function
int main() {

//declaring variables 

float temperature;

//asking for an input value
cout << " Enter any temperature in fahrenheit " ;

//reading the input value
cin >> temperature;
cout << " The value you entered is " << temperature ;

//doing the calculation
cout << " and its value in celcius is " << (temperature-32)*(0.56) << " .\n";

//end
return 0;
}
