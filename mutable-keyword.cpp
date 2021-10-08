/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Test {
   public:
      int a;
   mutable int b;
   Test(int x=0, int y=0) {
      a=x;
      b=y;
   }
   void seta(int x=0) {
      a = x;
   }
   void setb(int y=0) {
      b = y;
   }
   void disp() {
      cout<<endl<<"a: "<<a<<" b: "<<b<<endl;
   }
};
int main() {
   const Test t(10,20);
   cout<<t.a<<" "<<t.b<<"\n";
   // t.a=30; //Error occurs because a can not be changed, because object is constant.
   t.b=100; //b still can be changed, because b is mutable.
   cout<<t.a<<" "<<t.b<<"\n";
   return 0;
}