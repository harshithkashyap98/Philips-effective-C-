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
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    cout <<"The value of x is : " << x << endl;
    cout <<"The value of y is : " << y << endl;
    cout<<"Incremented value of x : "<<x++ << endl;
    cout<<"Incremented value of x : "<<++x << endl;
    cout<<"x mod y : "<<x%y<< endl;
    return 0;
}
