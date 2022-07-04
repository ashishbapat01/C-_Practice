#include<iostream>
using namespace std;
int main()
{
    int i_arr[10], i=0 ,i_sum=0;
    float f_avg=0.0;

    cout<<"Text data:- "<<endl;

   for(i=0;i<10;i++)
    {
        cin>>i_arr[i];

        i_sum =i_sum + i_arr[i];
        f_avg=i_sum/i_arr[i];

    }
     cout<<"The sum of 10 number is:-"<<i_sum<<endl;
      cout<<"The Average is:-"<<f_avg;
    return 0;
}
