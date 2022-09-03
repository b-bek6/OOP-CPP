/* TO show the use of unary operator overloading. */

#include<iostream>
using namespace std;

class Increament{
    private:
        int a;
        int b;
    public:
        Increament(int x , int y){
            a = x;
            b = y;
        }
        void operator ++(){
            ++a;
            ++b;
        }
        void display(){
            cout <<"After increament: \n" << "A = " << a <<"\n" << "B = " << b << endl;
        }
};

int main(){
    Increament I(10,20);
    ++I; // equivalent to i.operator ++() ;
    I.display();
    return 0;
}