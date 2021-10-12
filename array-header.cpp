/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,10> array1={1,2,3,4,5,6,7,8,9};
    cout<<array1.at(2)<<endl;
    cout<<array1.at(4);
}
