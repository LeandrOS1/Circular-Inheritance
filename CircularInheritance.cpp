#include <iostream>
using  namespace std;

class BaseA
{
public:
    void walk()
    {
        cout << "Father A is walking!" << endl;
    }
    void sleep()
    {
        cout << "Father A is sleeping!" << endl;
    }
};
class DerivedA: BaseA
{
public:
    void walk()
    {
        cout<<"Son A is walking !"<<endl;
    }
};
class DerivedAA: DerivedA
{
public:
    void sleep()
    {
        cout << "Grandson AA is sleeping !"<<endl;
    }
    void skate()
    { //new method
        cout << "Grandson AA is skating !"<<endl;
    }
};
class MainTestA
{
public:
    
};

int main()
{ 
    DerivedAA tDerivedAA; //instantiation of DerivedAA class
    //tDerivedAA.walk(); //Son A is walking! (not: Father A is walking!)
    tDerivedAA.sleep();    //Grandson AA is sleeping! (not: Father A issleeping!)
    BaseA tBaseA; //instantiation of BaseA class
    tBaseA.walk();              //now: Father A is walking!
    tBaseA.sleep();             //now: Father A is sleeping!
    tDerivedAA.skate();         //Grandson AA is skating!
    
}
