/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class numbertest
{
    private :
        const int x;
    public :
        numbertest()
        {
            x=36;
        }
        void display()
        {
            cout<<"The value of constant x member "<<x<<endl;
        }
};
int main()
{
   const int i=10;
   const int j=i+10;
   const int z=34;
   
   cout<<"The value of i : "<<i<<endl;
   cout<<"The value of j : "<<j<<endl;
   
   //i++; //leads to compile time error
   
   return 0;
}