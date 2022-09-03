/* #include<iostream>
using namespace std;
class Base{
    public:
        virtual void show() = 0;
};
class Derived_first : public Base{
    private:
        int data;
    public:
        Derived_first(int x) {data = x;}
        void show(){
            cout << "1. This is inside the first derive class " << data << endl;
        }
};
class Derived_second : public Base{
    private:
        int data;
    public:
        Derived_second(int x){data = x;}
        void show(){
            cout << "2. This is inside the second derive class " << data << endl;
        }
};



int main(){
    Base *Base_pointer;
    Derived_first f1(50);
    Derived_second s1(500);
    Base_pointer = &f1;
    Base_pointer -> show();
    Base_pointer = &s1;
    Base_pointer -> show();

    return 0;
}
*/
#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show() = 0;
};
class Derive1 : public Base{
    public:
        void show(){
            cout << "This is derive one class" << endl;
        }
};
class Derive2 : public Base{
    public:
        void show()
        {
            cout <<"This is derived two class" << endl;
        }
};
int main()
{
    Base *basepointer;
    Derive1 d1;
    Derive2 d2;
    basepointer = &d1;
    basepointer ->show();
    basepointer = &d2;
    basepointer ->show();
    return 0;
}