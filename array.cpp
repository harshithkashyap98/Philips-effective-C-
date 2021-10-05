/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
int arr[5],i,sum=0;
// types of declaration of array
int ar[5]={1,3,5,7,9};
int ar1[]={2,4,6,8};


cout<<"Enter the 5 numbers"<<endl;
//reading a array
for(i=0;i<5;i++)
{
    cin>>arr[i];
}
cout<<arr[i]<<endl; //junk value
//outputing array
for(i=0;i<5;i++)
{
    cout<<arr[i]<<endl;
}
//calculating sum of array
for(i=0;i<5;i++)
{
    sum=sum+arr[i];
}
cout<<"The sum is : "<<sum<<endl;
//enhanced loop - for each loop

int arr1[]={10,20,30,40};
cout<<"Even elements"<<endl;
for(int x :arr1)
{
    if(x%2==0)
    {
        cout<<arr1[x];
    }
}

    return 0;
}
