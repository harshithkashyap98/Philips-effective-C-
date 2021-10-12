/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <vector>
#include <iostream>
using namespace std;
int main()

{
vector<int> v; // capacity is possibly (but not guaranteed) to be 0
v.push_back( 1 );// capacity is some starter value, likely 1
cout<<v.capacity()<<endl;
v.clear(); // size is 0 but capacity is still same as before!
v = {1, 2, 3, 4 }; // size is 4, and lets assume capacity is 4.
v.push_back( 5 ); // capacity grows - let's assume it grows to 6 (1.5 factor)
cout<<v.capacity()<<endl;
v.push_back( 6 ); // no change in capacity
cout<<v.capacity()<<endl;
v.push_back( 7 ); // capacity grows - let's assume it grows to 9 (1.5 factor)// and so on
cout<<v.capacity()<<endl;
v.pop_back(); v.pop_back(); v.pop_back(); v.pop_back(); // capacity stays the same
cout<<v.capacity()<<endl;

}