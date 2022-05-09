#include<iostream>
using namespace std;
class triangle
{
    public:
    float a,b,c,percentage,f_area;;

    triangle(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void per()
    {
        percentage =a + b + c;
        cout<<"percentage is: "<<percentage<<endl;
    }
    void area()
    {

        f_area=0.5*a*6;
        cout<<"area is : "<<f_area<<eandl;
    }
};
int main()
{
    triangle t1(3,4,5);
    t1.per();

    return 0;
}
