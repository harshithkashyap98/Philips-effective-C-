/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<conio.h>
using namespace std;
template<typename T>
T add(T a,T b)
{
    return a+b;
}
template<typename T, typename V>
T addition(T a,V b)
{
    return a+b;
}

int main()
{

cout<<add<int>(4,5)<<endl;
cout<<add<float>(3.5,6.5)<<endl;
cout<<addition<int,float>(4,3.5)<<endl;
cout<<addition<float,int>(6.5,5)<<endl;

    return 0;
}