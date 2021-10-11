/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// An example of implicit conversion
  
#include <iostream>
using namespace std;
  
int main()
{
    int n, *p, c;
    cout<<"Input an integer "<<endl;
    cin>>n;
    
    p=new int[n];
    
    cout<<"Input "<<n<<" integers \n";
    
    for(c=0;c<n;c++)
    {
        cin>>p[c];
    }
    cout<<"Integers are"<<endl;
    for(c=0;c<n;c++)
    {
        cout<<p[c]<<endl;
    }
    delete[] p;
    
}