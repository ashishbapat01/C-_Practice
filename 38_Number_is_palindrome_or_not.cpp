#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    system("color A0");
    int i_num=0,i=0,rem=0,temp=0,rev=0;

    cout<<"Enter The Any Number :- ";
    cin>>i_num;

    temp=i_num;
    while(i_num!=0)
    {
       rem=i_num%10;
       rev=rev*10+rem;
       i_num=i_num/10;
    }
    if(temp==rev)
    {
      cout<<temp<<" is a palindrome number";
    }
    else
    {
        cout<< temp<< " is a not palindrome number"<<endl;
    }
    return 0;
}


