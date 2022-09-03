/*Program to understand pure virtual function */

#include<iostream>

using namespace std;

class Base{
    public:
        virtual void print() = 0;
};
class Derive : public Base{
    public:
        void print(){
            cout << "This is inside the derive class: " << endl;
        }
};

int main(){
    Base *b;
    Derive d;
    b = &d;
    b -> print();
    return 0;

}
