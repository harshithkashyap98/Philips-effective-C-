/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class X 
{
    private:
    int d;
    public:
    void set_value(int k)
    {
        d=k;
        
    }
    
    void show_sum(int n)
    {
        cout<<"sum of "<<d<<" and "<<n<<" = "<<d+n<<endl;
        
    }
    
    
};
class Y 
{
    public:
    X a;
    void print_result()
    {
        a.show_sum(5);
        
    }
    
};
 
int main()
{
  Y b;
  b.a.set_value(20);
  b.a.show_sum(100);
  b.print_result();
 
}
