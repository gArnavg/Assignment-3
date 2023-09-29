/*Any year is input through the keyboard. WAP to determine 
whether the year is a leap year or not.*/
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter The Year ";
    cin>>year;
    if(year%4==0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Non Leap Year";
    } 
    return 0;
}