#include<iostream>
using namespace std;
int  main()
{
    int i_Arr[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},i=0,j=0;

    for(i=0;i<=4;i++)
    {
        for(j=0;j<=5;j++)
        {
            i_Arr[i][j]<<" "<<" "<<endl;
        }
    }
    cout<<"Element in Array:- "<<i_Arr[i][j];
     for(i=0;i<=4;i++)
    {
        for(j=0;j<=5;j++)
        {
            i_Arr[i]<<" "<<endl;
             i_Arr[j]<<" "<<endl;
        }
    }
    cout<<i_Arr[i]<<i_Arr[j];
    return 0;
}
