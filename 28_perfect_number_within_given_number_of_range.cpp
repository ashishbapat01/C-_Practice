#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int i_num=0,i_sum=0,i=0,i_no=1;

    cout<<"Input the starting range of number:- ";
    cout<<i_no;
    cout<<endl;
    cout<<"Input the ending range of number:- ";
    cin>>i_num;




   while (i<i_num)
   {
       if(i_num%i==0)
       {
           i_sum=i_sum+i;

       }
       i++;

       if(i_sum==i_num)
       {
           cout<<"The Perfect Number With in The Range :-"<<i_sum;
        }

   }

return 0;
}
