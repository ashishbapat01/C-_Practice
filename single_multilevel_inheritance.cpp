#include<iostream>
using namespace std;
class Base
{
public:
    int x,y;
    Base()
    {
        cout<<"Base Constructor\n";
    }
    ~Base()
    {
        cout<<"Base Destructor\n";
    }
    void fun()
    {
        cout<<"Inside fun\n";
    }
};
class Derived:public Base
{
public:
    int a,b;
    Derived()
    {
        cout<<"Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived Destructor\n";
    }
    void gun()
    {
        cout<<"Inside gun\n";
    }
};
class Myderived:public Derived
{
public:
    int data;
    Myderived()
    {
        cout<<"Myderived Constructor\n";
    }
    ~Myderived()
    {
        cout<<"Myderived Destructor\n";
    }
    void sun()
    {
        cout<<"Inside sun\n";
    }
};
int main()
{
    Myderived obj;
   obj.fun();
    obj.gun();
    obj.sun();

    return 0;
}
