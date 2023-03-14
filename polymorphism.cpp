#include<iostream>
using namespace std;

class A{

    public:
        void sayHello(){
            cout << "Hello World\n";
        }
        void sayHello(int a){
            cout << "Hello World\n";
        }
        //Function Overloading - Same function name but different parameters
        //changing the return type will not make the function overloaded
        
        

};

class B{
    public:
        int a;
        int b;
    public:
        int add(){
            return a+b;
        }

    //Operator overloading
    void operator+(B &obj)
    {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Result - " << value2 - value1 << endl;
    }
};


int main()
{
    A obj1;
    obj1.sayHello();

    B obj2,obj3;
    obj2.a = 5;
    obj3.a = 3;
    obj2 + obj3;
}


/******************NOTES*********************/

//Polymorphism - poly - many and morph-forms(Father,Husband,Son) Fathers many forms
//Two type - Compile time polymorphism and Runtime Polymorphism/Dynamic Polymorphism
//1) Compile time/Static Polymorphism - Function Overloading and Operator Overloading