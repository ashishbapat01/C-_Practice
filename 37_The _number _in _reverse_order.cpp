#include<iostream>
#include<windows.h>
using namespace std;
void REVERSE_IN(int i_no);

int main()
{
    system("color 5a");
    int i_num;

    cout<<"Enter Any Numebr:- ";
    cin>>i_num;

    REVERSE_IN(i_num);

    return 0;
}
void REVERSE_IN(int i_no)
{
    int i_temp=0,i_rem=0,i_rev=0;

    i_temp=i_no;

    while(i_no!=0)
    {
        i_rem=i_no%10;
        i_rev=i_rev*10+i_rem;
        i_no=i_no/10;
    }
    cout<<i_rev;
}
