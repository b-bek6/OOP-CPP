// run time polymorphism

#include<iostream>
using namespace std;

class Base_class{
    public:
        int var_base;
        void display(){
            cout  << "This is the variable var_base " << var_base << endl;
        }
};
class Derive_class : public Base_class{
    public:
        int var_derive;
        void display(){
            cout  << "This is the variable var_base " << var_base << endl;
            cout  << "This is the variable var_derive " << var_derive << endl;
        }
};
int main(){
    Base_class *pointer_of_base;
    Derive_class obj_derive;
    Base_class obj_base;
    pointer_of_base = & obj_derive;

    pointer_of_base -> var_base = 10;
    pointer_of_base -> display();

    Derive_class *pointer_of_derive;
    pointer_of_derive = &obj_derive;
    pointer_of_derive -> var_derive = 30;
    pointer_of_derive -> display();
    return 0;
}