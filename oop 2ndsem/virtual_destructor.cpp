/* Program to understand virtual destructors */

#include<iostream>
using namespace std;

class Base{
    public:
        Base(){         // constructor function
            cout << "This is constructor of base class: " << endl;
        }
        ~Base(){        // destructor function
            cout << "This is destructor of base class: " << endl;
        }

};

class Derived : public Base{
    public:
        Derived(){
            cout << "This is constructor of derive class: " << endl;
        }
        ~Derived(){
            cout << "This is constructor of derive class: " << endl;
        }
};

int main(){
    Base *bptr;
    bptr = new Derived;
    delete bptr;                // here pointer object is called to delete the space occupied by the distructor.
    return 0;
}