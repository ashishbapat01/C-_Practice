#include<iostream>
using namespace std;
int main()
{
    int i_num=0,i_odd=0,i_sum=0;

    cout<<"Test Data Input Number of Terms : ";
    cin>>i_num;
    cout<<"The Odd Numbers Are:- ";
    for(int i=1;i<=i_num*2;i++)
    {
        if(i%2!=0)
        {
            cout<<i ;
            i_sum=i_sum+i;

        }

    }

          cout<<endl<<"TheSum Of Odd Natural Numbers upto 10 terms :- "<<i_sum;


    return 0;
}
