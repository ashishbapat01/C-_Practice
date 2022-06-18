#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    static string clgname;
    static int cnt;
    student (int i,string n)
    {
        cnt++;
        id=i;
        name=n;
    }
    static void fun()
    {
        cout<<"I am in function mode because i am happy."<<student::fun;
    }
    void display()
    {
        cout<<"Id= "<<id<<" Name= "<<name<<" clgname= "<<clgname<<endl;

    }
};
string student::clgname="YCCSK";
int student::cnt=0;


int main()
{
    student s1(1,"Vishal");
    student s2(1,"Ganesh");
    student s3(1,"Vijay");

    s1.display();
     s2.display();
      s3.display();

cout<<"count of student :- "<<student::cnt;
student::cnt;
    return 0;
}


