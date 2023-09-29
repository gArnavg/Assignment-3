/*Given the radius of the circle predict whether numerically
area of this circle is larger than the circumference or not.*/
#include<iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter the radius ";
    float circumference = 6.28*r;
    float area = 3.14*r*r; 
    if(circumference>area)
    {
        cout<<"Circumference = "<<circumference<<" is greater of two";
    }
    if(circumference<area)
    {
        cout<<"area = "<<area<<" is greater of two";
    }
    if(circumference=area)
    {
        cout<<"Circumference = area numerically equal to "<<area;
    }
}