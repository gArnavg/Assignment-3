/*Given three points (x1, y1), (x2, y2) and (x3, y3),WAP to 
check if all the three points fall on one straight line.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the Absicca for Point 1 ";
    cin>>x1;
    cout<<"Enter the Ordinate for Point 1 ";
    cin>>y1;
    cout<<"Enter the Absicca for Point 2  ";
    cin>>x2;
    cout<<"Enter the Ordinate for Point 2 ";
    cin>>y2;
    cout<<"Enter the Absicca for Point 3 ";
    cin>>x3;
    cout<<"Enter the Ordinate for Point 3 ";
    cin>>y3;

    float Ar= ((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2;
    float Area = abs(Ar);
    Area==0?cout<<"The Points Lie on A Line":cout<<"The points form a triangle of area "<<Area<<" Sqr Units";

    return 0;
}