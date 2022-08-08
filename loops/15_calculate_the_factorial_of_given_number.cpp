#include<iostream>
using namespace std;

int main()
{
    int i_num=0,i_fact=1;

    cout<<"Enter Any Number:- ";
    cin>>i_num;

    for(int i=1;i<=i_num;i++)
    {
        i_fact=i_fact*i;

    }
    cout<<"The factorial of "<<i_num<< " is:- "<<i_fact;
    return 0;
}
