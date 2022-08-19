#include<iostream>
#include<winsnmp.h>
using namespace std;

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    int i_num=0,i_con=0;

    cout<<"Enter Any Number:- ";
    cin>>i_num;

   for(int i=2;i<i_num;i++)
    {
        if(i_num%2==0)
        {
           i_con++;
        }

    }
    if(i_con==0)
    {
        cout<<i_num<<" The Number is prime Number";
    }
    else
    {
        cout<<i_num<<" The Number is Not prime Number";
    }
    return 0;
}
