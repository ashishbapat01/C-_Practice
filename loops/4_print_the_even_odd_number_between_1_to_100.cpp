#include<iostream>
using namespace std;
int main()
{

    int i=0;

    cout<<endl<<"Odd Number are: ";

    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            cout<< i<<"," ;
        }
    }

    cout<<endl<<endl<<"Even number are: ";

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            cout<< i<<",";
        }
    }


   return 0;
}
