#include<iostream>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;

    public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

//Inheritance
class Male: public Human {
    public:
    string color;
    void sleep()
    {
        cout << "Male Sleeping";
    }
};


int main()
{
    Male obj1;
    cout << obj1.age <<endl;
    cout << obj1.weight <<endl;
    obj1.setWeight(37);
    cout << obj1.weight <<endl;
    cout << obj1.height <<endl;
    cout << obj1.color <<endl;
    obj1.sleep();

}



/**************NOTES************************/

//Inheritance - Inheriting data members and fucntions by a class - A is parent class(base class or super class), B is child class(sub class or derived class)
//Syntax  = 
/*
class Parent{

};
class Child: access_modifier_here Parent{

};

*/

//If public access modifier is used to inherit a class the the child class will be also be public
//Public methods ->  public access modifier to inherit -> public...

//Protected - same as private but can be accessed by child class/derived class also other than same class

//Types of inheritance - single,multiple,multilevel,hierarchical,hybrid
//Multiple possible in c++ but not in java - Syntax - class C: public A, public B() {}

//If C inherits A and B and both A and B have same function name of a function then we use scope resolution operator to remove ambiguity - C obj1; obj1.A::func();  obj1.B::func();