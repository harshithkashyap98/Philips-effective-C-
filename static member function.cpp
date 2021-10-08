/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class test{
    static int i;
    int j;
    public :
    
        static void displayi()
        {
            cout<<"the value of static member i is : "<<i<<endl;
        }
        void printall()
        {
            cout<<"Value of j : "<<this->j<<endl;
            displayi();
        }
        test (int x) : j(x) {}
    
};

int test::i=30;

int main()
{
    test obj(45);
    obj.printall();
    return 0;
}