/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;
 
// first base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
// second base class
class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 
// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {
 
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}