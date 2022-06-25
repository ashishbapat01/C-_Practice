#include<iostream>
using namespace std;
class division
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
          cout<<"a= "<<a<<" b= "<<b<<endl;
      }
      division operator / (division d)
      {
          division temp;
          temp.a = a / d.a;
          temp.b = b / d.b;

          return temp;
      }
};
int main()
{
    division d1;
    d1.setdata(6,8);
    d1.show();

    division d2;
    d2.setdata(3,2);
    d2.show();

    division d3;
    d3=d1/d2;

    d3.show();

    return 0;
}
