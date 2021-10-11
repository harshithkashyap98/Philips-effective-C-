/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// An example of implicit conversion
  
#include <iostream>
using namespace std;
  
int main()
{
    int x = 10; // integer x
    char y = 'a'; // character c
  
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
  
    // x is implicitly converted to float
    float z = x + 1.0;
  
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
    double b = 1.2;
  
    // Explicit conversion from double to int
    int sum = (int)b + 1;
  
    cout << "Sum = " << sum<<endl;
    
    float k = 3.5;
  
    // using cast operator
    int p = static_cast<int>(k);
  
    cout << p;
  
    return 0;
}