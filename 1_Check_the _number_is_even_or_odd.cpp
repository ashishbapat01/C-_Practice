#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    int i_num=0,rem=0,rev=0,temp=0,icount=0;

    cout<<"Enter Any Number:-";
    cin>>i_num;

    temp=i_num;
    if(i_num%2==0)
    {
        cout<<"The Number is Even ";

    while(i_num!=0)
    {
       rem=i_num%10;
		rev=rev*10+rem;
		i_num=i_num/10;
    }
    cout<<"revers is:- " << rev <<endl;

    for(int i=2;i<rev;i++)
    {
        if(rev%i==0)
        {
            break;
        }
        else
        {
           icount++;
           break;
        }
    }
    if(icount==1)
    {
        cout<<"The number is prime Number";

    }
    else
    {
        cout<<"The number is not prime Number";
    }
    }
    else
    {
        cout<<"The Number is Odd";

    while(i_num!=0)
    {
       rem=i_num%10;
		rev=rev*10+rem;
		i_num=i_num/10;
    }
    if(temp==rev)
    {
        cout<<"The Number is Palindrome Number ";
    }
    else
    {
        cout<< " The Number is Not Palindrome Number";
    }
 }

       return 0;
}
