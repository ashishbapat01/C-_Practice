#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    int i_num=0,i_ans=0,i_arm=0,i_no=0;

    cout<<"Enter Input Any Number:- ";
    cin>>i_num;
    i_no=i_num;
    while(i_no>0)
    {
        i_arm=i_no%10;
        i_ans=i_ans+i_arm*i_arm*i_arm;
        i_no=i_no/10;
    }
    if(i_ans==i_num)
    {
        cout<<i_num<<" is An Armstrong Number"<<endl;
    }
    else
    {
        cout<<i_num<<" is Not An Armstrong Number "<<endl;
    }
    return 0;
}
