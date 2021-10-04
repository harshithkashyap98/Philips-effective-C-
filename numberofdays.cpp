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
 int w,d,rd;
 cout<<"Enter number of days :"<<endl;
 cin>>w;
 d=w/7;
 rd=w%7;
 cout <<"The number of weeks are :"<<d<<endl;
 cout<<"The number of remaining days are : "<<rd<<endl;
    return 0;
}
