#include <iostream>
using namespace std;



class Hero
{

    // Properties
private:
    int health;

public:
    char name[100];
    char level;

    static int timeToComplete;

    static int fun(){
        // return  health; non-static members cannot be accessed in a static function IMP
        // return level;
        return timeToComplete; 
    }
    
    Hero()
    {
        cout << "Constructor Called";
    }

    ~Hero()
    {
        cout << "Destructor called ";
    }

    Hero(Hero &temp) // Pass by reference in copy constructor(& sign)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    // Parameterised Constructor
    Hero(int health)
    {
        this->health = health;
    }

    void sethealth(int h)
    {
        health = h;
    }
    int getHealth()
    {
        return health;
    }
};

//Initializing static data member
// :: - Scope resolution operator
int Hero::timeToComplete = 5;


int main()
{

    cout << Hero::timeToComplete <<"ok\n";

    // Object Creation static
    Hero h1(13);

    // h1.health = 70;
    // h1.sethealth(90);
    h1.level = 'A';

    // Copy constructor writing style 1 -
    Hero h3(h1);

    // Copy constructor writing style 2 -
    //  Hero h3;
    //  h3.level = h1.level;

    // cout<< "Name - " << h1.name << endl;
    cout << "Health - " << h1.getHealth() << endl;
    cout << "Level - " << h1.level << endl;
    cout << "Health - " << h3.getHealth() << endl;
    cout << "Level - " << h3.level << endl;

    // Object Creation dynamic
    //  Hero *h2 = new Hero();
    //  delete h2  - destructor called manually
    // (*h2).sethealth(29);

    // cout<< "Name - " << (*h2).name << endl;
    // cout<< "Name - " << h2->name << endl;
    // cout<< "Health - " << (*h2).getHealth() << endl;
    // cout<< "Level - " << (*h2).level << endl;

    // accessing values of class using h1 object
    // cout << "Size is - " << sizeof(h1);
}

/**********************NOTES***************************************/

// Empty class has a size of 1 byte (To keep track of the class)
// We can include classes form other file using #include "File_name.cpp"
// By default all classess are private in cpp
// Private members can be accessed inside class only in which they are defined
// Getter and Setter are used to access private members of a class
// Setter and getter can be used to check conditions and update something accordingly like password etc.
// In dynamic allocation of object we can use (*h2).health or h2->health to access members
// When we create a object a constructor is automatically called to initialize values(default constructor);
// Constructor have the same name as class name and does not have a return type
// Parameterised constructor is used to initialize a constructor with some initial value
// If input parameter name is same as member name then we use this keyword
// this keyword stores the address of current object(this is a pointer variable)
// We have have created a new constructor then the default constructor is automatically destroyed
// Copy constructor - Copies all value of object 1 into object 2(it is generated internally like default constructor)
// We can write our own copy constructor like we can write parameterised constructor
// Copy constructor is of two type - Shallow copy and Deep Copy
// Default copy constructor -> Does shallow copy - change in one variable of object 1 changes the value of same in copied object - same memory
//Copy Assignment Operator is used in place of copy constructor to give value of object 1 to object 2. It is used to copy ////values when objects have already been created. 
//Eg Hero h1; Hero h2; h1=h2(copy assignment operator)
//Destructor - Used to deallocate memory - become active when object lifecycle is about to end (out of scope)
//Destructor name same as class name, no return type, no parameters
//It is of two type statically and dynamically(Difference b/w Destructor and Constructor - Destructor has tilde sign(~) befor class name)
//Statically created object - Automatically destructor is called but dynamically needs manual destructor calling.  
//Destructor is called only once in the end of lifecycle
//Static keyword creates a data member which belongs to the class - we do not need to create a object to access a static member
//Static member belong to the class not to the object.Therefor it can be accessed directly using scope resolution operator
//Static Functions - No need to create object to access it, they dont have this keyword (IMP), can access static members only
//