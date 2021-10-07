/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class circle
{
    private :
        double x,y;
        double r;
    public:
        circle(double x, double y, double r)
        {
            this->x=x;
            this->y=y;
            if (r>0) this->r=r;
            else
                this->r=1.0;
        }
        
        void getXYR(double& x, double& y, double& r )
        {
            x=this->x;
            y=this->y;
            r=this->r;
        }
        void setXYR(double x, double y, double r)
        {
            this->x=x;
            this->y=y;
            if (r>0) this->r=r;
            else
                this->r=1.0;
        }
        double Area()
        {
            const double pi=3.141592;
            return pi*r*r;
        }
        
        
};

class circlecolor : public circle
{
    private:
        unsigned int color=0;
    public:
        circlecolor(double x, double y, double r, unsigned int color):circle(x,y,r)
        {
            this->color=color;
        }
        unsigned int getcolor()
        {
            return color;
        }
        void setcolor(unsigned int color)
        {
            this->color=color;
        }
    
};

int main()
{
    circle cr(1,3,2);
    double area=cr.Area();
    cout<<"The instance of the class color :"<<endl;
    cout<<"Area : "<<area<<endl;
    double x,y,r;
    cr.getXYR(x,y,r);
    cout<<"x = "<<x<<" y = "<<y<<" radius = "<<r<<endl;
    circlecolor crcol(2,4,6,1);
    unsigned int col=crcol.getcolor();
    crcol.getXYR(x,y,r);
    cout<<"The instance of circle is :"<<endl;
    cout<<"Color = "<<col<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"radius = "<<r<<endl;
    cout<<"area = "<<crcol.Area()<<endl;
}