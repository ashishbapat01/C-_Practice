#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

    int i=0,j=0,k=0;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_INTENSITY);

    for(int i=1;i<=3;i++)
    {

        for(int j=1;j<=3-i;j++)
        {

            cout<<"  ";
        }
        for(int k=1;k<2*i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
      }

    return 0;
}
