/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
//passbyvalue
void passbyvalue(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
}
//passbypointers
void passbypointers(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10,b=20;
    cout<<"Before Swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    passbyvalue(a,b);
    cout<<"After pass by value Swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    passbypointers(&a,&b);
    cout<<"After pass by pointers Swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
   
    return 0;
}
