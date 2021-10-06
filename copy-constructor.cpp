/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>  
using namespace std;  
class A  
{  
   public:  
    int x;  
    A(int a)                // parameterized constructor.  
    {  
      x=a;  
    }  
    A(A &i)               // copy constructor  
    {  
        x = i.x;  
    }  
};  
int main()  
{  
  A a1(20);               // Calling the parameterized constructor.  
 A a2(a1);                //  Calling the copy constructor.  
 cout<<a2.x;  
  return 0;  
}  