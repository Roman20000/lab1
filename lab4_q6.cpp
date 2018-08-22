//program to enter base and height of a triangle and using that to find its area

//including library
#include <iostream>

using namespace std;

//including function
int main () {

//declaring variables
float base;
float height;

//asking for input
cout << " Enter the base of a triangle " ;
cin >> base;
cout << " enter the height of the triangle ";
cin >> height ;

//doing the calculation
cout << " Hence the area of the triangle is " << (0.5*base)*height<< ".\n";

//end
return 0;
}
