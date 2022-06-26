#include<iostream>
using namespace std;
class demo
{
public:

    int a,b;
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a= "<<a<<" and b = "<<b<<endl;
    }
    demo operator - (demo d)
    {
        demo temp;
        temp.a=a-d.a;
        temp.b=b-d.b;
        return temp;
    }
};
int main()
{
    demo d1;
    d1.setdata(4,3);

    demo d2;
    d2.setdata(5,7);

    demo d3;
    d3=d1-d2;

    d3.show();

    return 0;
}


