#include<iostream>
using namespace std;
int main()
{
    int i_num=10, i=0 ,i_sum=0;

    cout<<"The first 10 Natural Number:- "<<endl;
   for(i=1;i<=10;i++)
    {
        cout<< i;
        i_sum=i+i_sum;

    }
     cout<<endl<<"The sum is :- "<<i_sum;
    return 0;
}


