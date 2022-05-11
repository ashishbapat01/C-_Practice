#include<iostream>
using namespace std;

class demo
{
public:
    int a,b;
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    demo (demo & z)
    {
        a=z.a;
        b=z.b;
    }
    void display()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    int p,q;
    cout<<"Enter The number:- ";
    cin>>p>>q;

    cout<<"---Before Copy Constructor---"<<endl;
    demo d1(p,q);
    d1.display();

    cout<<"---After Copy Constructor---"<<endl;

    demo d2(d1);
    d2.display();



    return 0;
}
