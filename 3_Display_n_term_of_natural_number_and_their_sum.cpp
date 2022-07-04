#include<iostream>
using namespace std;
int main()
{
    int i_num=0, i=0 ,i_sum=0;

    cout<<"Text data:- ";
    cin>>i_num;
   for(i=1;i<=i_num;i++)
    {
        cout<< i;
        i_sum=i+i_sum;

    }
     cout<<endl<<"The sum of Natural Number upto "<<i_num <<" terms:- "<<i_sum;
    return 0;
}
