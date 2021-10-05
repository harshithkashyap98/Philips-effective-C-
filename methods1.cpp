/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

//methods programs - user defined method and builtin methods
void display()
{
    cout<<"Welcome to pop"<<endl;
}
//userdefined method
void addition(int a,int b)
{
    int sum;
    sum=a+b;
    cout<<"The sum is : "<<sum<<endl;
}

int main()
{
    display();
    display();
    addition(10,20);
    addition(4,5);
    char a[30];
   
    return 0;
}
