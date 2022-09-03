#include<iostream>
using namespace std;

class Main{
    private:
        int x;
        friend class Derived;
    public:
        Main() : x(10) {}
};

class Derived{
    private:
        int y;
    public:
        Derived() : y(5) {}
        int sum(){
            Main A;
            return A.x+y;
        }
};
int main(){
    Derived d;
    cout << "The sum is: " << d.sum() << endl;
    return 0;
}