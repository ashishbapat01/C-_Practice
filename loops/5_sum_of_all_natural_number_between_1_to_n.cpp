#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    system("color A0");
    int i_num=0,i_sum=0;

    cout<<"Enter Any Number:- ";
    cin>>i_num;

    for(int i=1;i<=i_num;i++)
    {
        cout<<i;
        i_sum=i+i_sum;
    }
    cout<<endl<<" sum= "<<i_sum;
    return 0;
}
