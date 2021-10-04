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
 int a,b;
 cin>>a>>b;
 if(a==b)
 {
     cout<<"Both the numbers are equal"<<endl;
 }
 else if(a>b)
 {
     cout<<a<<" is greater than "<<b<<endl;
 }
 else
 {
     cout<<b<<" is greater than "<<a<<endl;
 }
 
    return 0;
}
