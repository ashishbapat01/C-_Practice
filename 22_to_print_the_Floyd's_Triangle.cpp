#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;


    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=5;j++)
        {


            if(i>=j)
        {
           if (i%2==j%2)
           {
               cout<<"1";
           }
           else
           {
               cout<<"0";
           }
        }
      }

        cout<<endl;
    }
    return 0;
}

