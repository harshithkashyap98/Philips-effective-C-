/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class A{
    mutable int x;
    
    public :
        A(){
            cout<<"Default constructor called"<<endl;
        }
        A(const A& a)
        {
            cout<<"Copy constructor called"<<endl;
        }
};

int main() {
  A obj;
  A a1 = obj;
  A a2(obj);
}