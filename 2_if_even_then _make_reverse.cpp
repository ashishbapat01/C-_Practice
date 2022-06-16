#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    system("color 0A");
    int i_num=0;

    cout<<"Enter Any Number:-";
    cin>>i_num;



    if(i_num%2==0)
      {
        cout<<"The Number is Even";
      }
    else
      {
        cout<<"The Number is Odd";
      }

       return 0;
}
