#include<iostream>
using namespace std;
int main()
{
    int i_num=0,i_even=0,i_sum=0;
    {
        cout<<"Enter Any Number :- ";
        cin>>i_num;

        cout<<"The Even Number is :-";
        for(int i=1;i<=i_num*2;i++)
        {
            if(i%2==0)
            {
              cout<< i ;
              i_sum=i_sum+i;
            }

        }
           cout<<endl<<"The sum of Even Natural  Number upto "<<i_num<< " terms:- "<<i_sum<<endl;

    }
    return 0;
}
