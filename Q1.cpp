/*Take 2 integers input and print the greatest of them.*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number ";
    cin>>x;
    cout<<"Enter the 2nd number ";
    cin>>y;

    if(x>=y)
    {
        cout<<"The Greatest Of The Two Numbers is "<<x;
    }
    if(y>x)
    {
        cout<<"The Greatest Of The Two Numbers is "<<y;
    }
}