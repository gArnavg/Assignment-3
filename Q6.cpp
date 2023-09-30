/*If the marks of A, B and C are input through the keyboard, 
WAP to determine the student scoring least marks. */

#include<iostream>
 using namespace std;
 int main()
 {
    int m1,m2,m3;
    cout<<"Enter The Marks Of Student 1 Student 2 and Student 3 Respectively ";
    cin>>m1>>m2>>m3;

    if((m1==m2)&&(m1==m3))
    {
        cout<<"Everyone Got Equal Marks";
    }
    if((m1>m2)&&(m1>m3))
    {
        cout<<"Student 1 Got Highest";
    }
    if((m2>m1)&&(m2>m3))
    {
        cout<<"Student 2 Got Highest";
    }
    if((m3>m1)&&(m3>m2))
    {
        cout<<"Student 3 Got Highest";
    }
 }