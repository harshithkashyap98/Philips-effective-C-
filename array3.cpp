/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <array>
#include <iostream>
using namespace std;
int main()

{
 array<int,5> array1={1,2,3,4,5};
 
 for(auto it = array1.begin();it!=array1.end();++it)
 {
     cout<<" "<<*it;
 }
 return 0;
}