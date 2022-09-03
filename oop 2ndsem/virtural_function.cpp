/* Program to understand virtual functions 
virtua means existance in appearance but not in reality


#include<iostream>
using namespace std;

class BASE{
    public:
        virtual void print(){
            cout << "This is print function inside the base class" << endl;
        }
        void display(){
            cout << "This is display function inside the base class" << endl;
        }
};

class DERIVE : public BASE{
    public:
        void print(){
            cout << "This is print function inside the derive class" << endl;
        }
        void display(){
            cout << "This is display function inside the derive class" << endl;
        }
};

int main(){
    BASE *baseptr;
    DERIVE derive;
    baseptr = &derive;
    baseptr -> print();
    baseptr -> display();
    return 0;

}
*/

#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout <<"This is inside base class" << endl;
        }
        void print(){
            cout << "This is print function inside the base class" << endl;
        }
};
class Derive1 : public Base{
    public:
        void show(){
            cout <<"This is inside base class" << endl;
        }
        void print(){
            cout << "This is print function inside the derive two class" << endl;
        }
};
class Derived2 : public Base{
    public:
        void show(){
            cout <<"This is inside base class" << endl;
        }
        void print(){
            cout << "This is print function inside the derive two class" << endl;
        }
};

int main(){
    Base *BP;
    Derive1 D1;
    Derived2 D2;
    BP = &D1;
    BP->show();
    BP=&D2;
    BP->show();
}