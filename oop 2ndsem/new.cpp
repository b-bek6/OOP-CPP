#include<iostream>
using namespace std;

class Value{
    private:
        int a;
        int b;
        int *p;

    public:

    Value(){ // normal constructor
        a=0;
        b=1;
    }
    Value(int m, int n){ // parameterized constructor
        a = m;
        b = n;
        p = new int[20];
    }
    Value(Value &v1){ // copy constructor
        a = v1.a + 10;
        b = v1.b + 10;
    }
    void display(){
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
    ~Value(){
        cout << "Destructor did it's job..." << endl;
        delete p;
    }

};
int main(){
    Value v1;
    v1.display();
    cout << endl;

    Value v2(10, 20);
    v2.display();
    cout << endl;

    Value v3(v1);
    v3.display();
    cout << endl;
    return 0;
}
