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
 bool w;
 int a=34,b=33;
 w=(a>b);
 cout<<"The value returned is : "<<w<<endl;
 w=(a>b)&&(a>30)&&(b>35);
 cout<<"The value returned is : "<<w<<endl;
 w=(a>b)||(a>30)||(b>35);
 cout<<"The value returned is : "<<w<<endl;
 w=(a>b)||(a>30)&&(b>35);
 cout<<"The value returned is : "<<w<<endl;
 w=!(a>b);
 cout<<"The value returned is : "<<w<<endl;
    return 0;
}
