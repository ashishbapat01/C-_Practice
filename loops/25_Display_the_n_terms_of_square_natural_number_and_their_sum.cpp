#include<iostream>
using namespace std;

int main()
{
    int i_num=0,i_sum=0;

    cout<<"Enter Any Number :- ";
    cin>>i_num;

    cout<<"The square Natural upto "<< i_num<<" tearms are:- ";
    for(int i=1;i<=i_num;i++)
    {
       cout<<i*i;
       i_sum=i_sum+i*i;
    }
     cout<<endl<<"The sum of square Natural upto "<< i_num<<" tearms are:- "<<i_sum<<endl;
    return 0;
}
