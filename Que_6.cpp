#include<iostream>
using namespace std;
class Mammals
{
public:

    void mam()
    {
        cout<<"\nI am Mammals";
    }

};
class MarineAnimals
{
public:

    void ani()
    {
        cout<<"\n I am MarineAnimals\n";
    }

};
class BlueWhale: public MarineAnimals,public Mammals
{
public:

    void blu()
    {
        cout<<"\n I belong to both categories: Mammals as well as MarineAnimals \n";
    }

};

int main()
{
     Mammals Mammal;
     Mammal.mam();

     MarineAnimals MarineAnimals;
     MarineAnimals.ani();

     BlueWhale BlueWhale;
     BlueWhale.blu();

     BlueWhale.ani();
     BlueWhale.mam();

    return 0;
}

