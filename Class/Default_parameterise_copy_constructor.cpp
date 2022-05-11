#include<iostream>
using namespace std;
class Demo
{
public:
    int i;int j;
    Demo()    //Defalut Constructor
    {
        i=0;
        j=0;
    }

    Demo (int a,int b)  //parameterised Constructor
    {
        i=a;
        j=b;
    }

    Demo(Demo &k)  //Copy Constructor
    {
        i=k.i;
        j=k.j;
    }

    void display()
    {
        cout<<"Addition is :- "<<i+j<<endl;
    }
   ~Demo()
   {
       cout<<" Destructor is call."<<endl;
   }
};
int main()
{
    int i_No1=0,i_No2=0;

    cout<<"Enter Any Two Number:- ";
    cin>>i_No1>>i_No2;

    Demo d1(i_No1,i_No2);
    Demo d2(d1);

    d1.display();

}
