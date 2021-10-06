/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<conio.h>
using namespace std;
template<typename T,typename V>
class weight{
    private :
    T kg;
    V grm;
public :
void setdata( T x, V y)
{
    kg=x;
    grm=y;
}

V getdata()
{
    return kg+grm;
}
};

int main()
{
weight<int,float> obj;
obj.setdata(4,0.5);
cout<<"The weight is : "<<obj.getdata()<<endl;


    return 0;
}