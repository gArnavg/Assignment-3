/*WAP to input sides of a triangle and check whether a
 triangle is equilateral, scalene or isosceles triangle.*/

 #include<iostream>
 using namespace std;
 int main()
 {
    int l1,l2,l3;
    cout<<"Enter The lengths ";
    cin>>l1>>l2>>l3;

    if((l1==l2)&&(l2==l3))
    {
        cout<<"Triangle is Equilateral";
    }
    if((l1!=l2)&&(l2!=l3)&&(l3!=l1))
    {
        cout<<"Triangle is scalene";
    }
    if(((l1==l2)&&(l2!=l3))||((l1==l3)&&(l1!=l2))||((l2==l3)&&(l2!=l1)))
    {
        cout<<"Triangle is isoceles";
    }
 }
