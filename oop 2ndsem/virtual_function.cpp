#include<iostream>
using namespace std;

class Base{
    public:
        int var_base;
        virtual void show(){
            cout << "This is show function inside Base class " << endl;
        }


};
class Derive : public Base {
    public:
        void show(){
            cout << "This is show function inside derive class: " << endl;
        }
};
int main(){
    Base * base_pointer;
    Derive obj_derive;
    base_pointer = &obj_derive;
    base_pointer -> show();
    return 0;
}