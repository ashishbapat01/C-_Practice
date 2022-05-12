#include<iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout<<"default constructor"<<endl;

    }
    demo(int a)
    {
       cout<<"parameterized constructor"<<endl;
    }
    ~demo()
    {
        cout<<"destructor constructor"<<endl;
    }
};
int main()
{
    demo d;
    demo d1(2);

    return 0;
}
