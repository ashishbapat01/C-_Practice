#include<iostream>
using namespace std;
int main()
{
    int num=0,rev=0,temp=0,rem=0;
    cout<<"Enter Any Input:- ";
    cin>>num;

    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<rev;

    return 0;
}
