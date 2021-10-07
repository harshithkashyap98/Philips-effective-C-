/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ program to explain
// Single inheritance
#include <iostream>
using namespace std;
 
// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// sub class derived from a single base classes
class Car: public Vehicle{
 
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}