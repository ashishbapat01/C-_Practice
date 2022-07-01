#include<iostream>
using namespace std;
class multiplication
{
public:
    int a=0,b=0;
    void setdata(int x,int y)
    {
      a=x;
      b=y;
    }
    void show()
    {
        cout<<"a= "<<a<<" and b= "<<b<<endl;
    }
    multiplication operator * (multiplication d)
    {
        multiplication temp;
        temp.a=a*d.a;
        temp.b=b*d.b;
        return temp;

    }

};
int main()
{
    multiplication m1;
    m1.setdata(4,5);

    multiplication m2;
    m2.setdata(3,2);

    multiplication m3;
    m3=m1*m2;

    m3.show();

    return 0;
}

