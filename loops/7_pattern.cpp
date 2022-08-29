 #include<iostream>
 #include<windows.h>

using namespace std;

int main()
{
    system("color A0");
    int i_num=0;

    cout<<"Enter Any Number:- ";
    cin>>i_num;

    for(int i=1;i<=i_num;i++)
    {
      for(int j=1;j<=i_num;j++)
      {
         cout<<"*";
      }
      cout<<endl;
    }

    return 0;
}
