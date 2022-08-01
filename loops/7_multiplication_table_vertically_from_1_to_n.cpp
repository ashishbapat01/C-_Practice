#include<iostream>
using namespace std;
int main()
{
    int i_num=0,i_multi=0,i=1;

    cout<<"Input table no starting from 1:";
    cin>>i_num;

    for(i=1;i<=i_num;i++)
    {
      for(int j=1;j<=10;j++)
       {
         i_multi=i*j;
         cout<<i<<"*"<<j<<"="<<i_multi;
        cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}
