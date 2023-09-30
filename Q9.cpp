/* WAP to input any character and check whether it is the alphabet,
 digit or special character.*/
 #include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Character";
    cin>>ch;
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        cout<<"Alphabet";
    }
    if(ch>=48&&ch<=57)
    {
        cout<<"Number";
    }
    if(ch>=33&&ch<=47)
    {
        cout<<"Special Character";
    }
    }