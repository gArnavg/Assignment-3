/*Given a point (x, y), WAP to find out if it lies on 
the x-axis, y-axis or at the origin, viz. (0, 0). */

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter The Abssica : ";
    cin>>x;
    cout<<"Enter The Ordinate : ";
    cin>>y;
    
    if((x==0)&&(y==0))
    {
        cout<<"The Point lie on the Origin ";
    }
    if((x!=0)&&(y!=0))
    {
        cout<<"Point lies on X-Y Plane ";
    }
    if((x==0)&&(y!=0))
    {
        cout<<"Point lie on Y Axis ";
    }
    if((x!=0)&&(y==0))
    {
       cout<<"Point lie on X Axis ";
    }
    return 0;
}