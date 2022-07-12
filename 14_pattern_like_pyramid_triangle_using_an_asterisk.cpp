#include<iostream>
using namespace std;
int main()
{
    int i_num=0,k=0;

    cout<<"Enter the number:- ";
    cin>>i_num;

    for(int i=1;i<=i_num;i++)
    {
        for(int j=1;j<=i_num-i;j++)
           {
                cout<<" " ;
           }
        for(int k=1;k<=i;k++)
          {
                 cout<<"* ";
          }
          cout<<endl;
       }

    return 0;
}

