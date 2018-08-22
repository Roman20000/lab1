//program to enter two angles and find the third angle

//including the library
#include <iostream>

using namespace std;

//including function
int main () {

//declaring variables
int angle_a;
int angle_b;

//asking for an input value
cout << " Enter your first angle ";
cin >> angle_a ;
cout << " enter your second angle ";
cin >> angle_b;

//reading the variables
cout << " Hence your third angle is " << 180-(angle_a+angle_b)<< ".\n";

//end
return 0;  
}
