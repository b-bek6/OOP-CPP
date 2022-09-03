#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(){}
        Complex(int x, int y){
            a = x;
            b = y;
        }
        Complex operator +(Complex &o){
            Complex c;
            c.a = o.a + a;
            c.b = o.b + b;
            return c;
        }
        void display(){
            cout << a << " + " << b << "i" << endl;
        }

};
int  main(){
        Complex c1(2,3), c2(4,5), c3;
        c3 = c1 + c2;
        c1.display();
        c2.display();
        c3.display();
        return 0;
}