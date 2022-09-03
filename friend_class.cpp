#include<iostream>
using namespace std;

class A{
    private: 
        int a;
    public:
        A(){ a = 10; }
        friend class B;
};
class B{
    private:
        int b;
        string c;
    public:
        B(){
            b = 10;
            c = "bib";
        }
        void print(A &o){
            cout << o.a <<b << c << endl;
        }
};

int main(){
    A a;
    B b;
    b.print(a);
}

