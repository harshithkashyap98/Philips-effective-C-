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
 int a,b,ch;
 cin>>a>>b;
 cout <<" 1. addition\n 2. subtraction \n3. Multiplication\n4. Division "<<endl;
 cin>>ch;
 switch(ch)
 {
     case 1 : cout << "a+b = "<<a+b<<endl;break;
     case 2 : cout << "a-b = "<<a-b<<endl;break;
     case 3 : cout << "a*b = "<<a*b<<endl;break;
     case 4 : cout << "a/b = "<<a/b<<endl;break;
     default : cout<<"Invalid choice"<<endl;
 }

    return 0;
}
