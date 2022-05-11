#include<iostream>
using namespace std;

class demo
{
public:
    int a;
    int b;
    int *p;
    demo()
    {
        p=new int;
    }
    demo (demo &x)
    {
       this->a=x.a;
        this->b=x.b;
        p=new int;
        *(this->p)=*(x.p);
    }
    void setdata(int i,int j,int k)
    {
        a=i;
        b=j;
        *p=k;
    }
    void display()
    {
        cout<<"value of a is: "<<a<<endl;
        cout<<"value of b is: "<<b<<endl;
        cout<<"value of *p is: "<<*p<<endl;
    }
};
int main()
{
   demo d1;
   d1.setdata(2,3,4);
   demo d2(d1);


     *(d1.p)=77;
    d1.display();
    d2.display();

    return 0;
}

