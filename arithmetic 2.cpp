/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout <<"The value of x is : " << x << endl;
    cout <<"The address of x is : "<< &x << endl;
    cout <<"The address of y is : "<< &y << endl;
    cout <<"The address of z is : "<< &z << endl;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    z=x+y;
    cout <<"The value of x is : " << x << endl;
    cout <<"The value of y is : " << y << endl;
    cout <<"The value of z=x+y is : " << z << endl;
    x=x+1;
    z=x*y;
    cout <<"The incremented value of x is : " << x << endl;
    cout <<"The value of x-y is : " << x-y << endl;
    cout <<"The value of x*y is : " << z << endl;
    cout <<"The value of x/y is : " << x/y << endl;
    return 0;
}
