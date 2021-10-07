/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ program for Hybrid Inheritance
 
#include <iostream>
using namespace std;
 
// base class
class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
//base class
class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};
 
// first sub class
class Car: public Vehicle
{
 
};
 
// second sub class
class Bus: public Vehicle, public Fare
{
     
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base class
    Bus obj2;
    return 0;
}