#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show() = 0;
};

class Derived_one : public Base{
    int x;
    public:
        Derived_one(int x){
            this -> x = x;
        };
        void show(){
            cout << x << endl;
        }

};
class Derived_two : public Base {
    int x, y;
    public:
        Derived_two(int x, int y){
            this -> x = x; 
            this -> y = y;

        }
        void show (){
            cout << x << y;
        }
};

int main (){
    Base *base_pointer;
    Derived_one a(10);
    Derived_two b(4,6);
    base_pointer = &a;
    base_pointer -> show();
    base_pointer = &b;
    base_pointer ->show();
}