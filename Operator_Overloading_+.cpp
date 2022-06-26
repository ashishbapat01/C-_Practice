#include<iostream>
using namespace std;
class addition
{
public:
    int a,b;
    void setdata (int x,int y )
    {
        a=x;
        b=y;
    }
    void show ()
    {
        cout<<"a= "<<a<<" and b= "<<b<<endl;
    }
    addition operator +(addition d)
    {
        addition temp;
        temp.a=a+d.a;
        temp.b=b+d.b;

        return temp;
    }
};
int main()
{
    addition a1;
    a1.setdata(5,7);

    addition a2;
    a2.setdata(4,6);

    addition a3;
    a3=a1+a2;

    a3.show();

    return 0;

}
