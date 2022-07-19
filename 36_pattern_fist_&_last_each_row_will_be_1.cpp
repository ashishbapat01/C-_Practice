#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

    int i=0,j=0,k=0,num = 1,l=0;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    for(int i=1;i<=3;i++)
    {

        num = 1;
        for(int j=1;j<=3-i;j++)
        {

            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {

           cout<<" "<<num;

           num++;
        }
        if(k<=i)
        {
            num--;
            for(l=k;num>1;l++)
            {
                num--;
                cout<<" "<<num;
            }
        }


          cout<<endl;
    }



    return 0;
}
