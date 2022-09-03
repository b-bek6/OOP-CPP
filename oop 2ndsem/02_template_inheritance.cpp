/* Program to demonstrate inheritance in template class */

#include <iostream>

using namespace std;

template <class T>
class Base{
    private:
        T a;
    public:
        void set(const T& val)
        {
            a = val;
        }
        void display(){
            cout <<"A = " << a << endl;
        }
};
template<class T>
class Derived: public Base <T>{
    private:
        int b;
    public:
        void set(const T& val1,const T& val2){
            Base<T>:set(val1);
            b = val2;
        }
        void display(){
            Base<T>:display();
            cout<<"a = " << a << endl;
        }
};
int main(){
    Derived<int> x;
    x.set(2,3);
    x.display();
    return 0;
}