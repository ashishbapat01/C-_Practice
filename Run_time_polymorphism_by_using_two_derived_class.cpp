#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout<<"Drawing......"<<endl;
    }
};
class Rectangle:public Shape
{
public:
    void draw()
    {
        cout<<"Drawing Rectangle..."<<endl;
    }
};
class Circle:public Shape
{
public:
    void draw()
    {
        cout<<"Drawing Circle....."<<endl;
    }
};
int main()
{
   Shape *s;
   Shape sh;
    Rectangle r1;
    Circle cir;
    s=&sh;
    s->draw();
    s=&r1;
    s->draw();
    s=&cir;
    s->draw();


    return 0;
}

