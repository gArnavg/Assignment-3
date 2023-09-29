/* Given the length and breadth of a rectangle, 
WAP to find whether numerically the area of the rectangle 
is greater than its perimeter.*/

#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Length ";
    cin>>l;
    cout<<"Width ";
    cin>>b;

    int p = 2*(l+b);
    int a = l*b;
    cout<<"Perimeter = "<<p<<endl;
    cout<<"Area = "<<a<<endl;

    if(p>a)
    {
        cout<<"Perimeter is Greater ";
    }
    if(p<a)
    {
        cout<<"Area is Greater ";
    }
    if(p==a)
    {
        cout<<"Perimeter = Area";
    }
}