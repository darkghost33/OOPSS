#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout << "Speak" << "\n";
    }
};

class Dog: public Animal
{
    public:
        void speak(){
        cout << "Bark" << "\n";
        }
};

int main()
{
    Dog obj;
    obj.speak();
}



/****************NOTES****************/

//Runtime Polymorphism / Dynamic Polymorphism - Method Overriding - Possible only through inheritance(IMP)
//Function name and arguement should be same int both parent and child class
//If we write our own custom function in the child class then it will override the method in the parent class