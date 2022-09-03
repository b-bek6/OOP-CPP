#include<iostream>
using namespace std;

class Numbers{
    public:
        int a;
        Numbers add(Numbers Ea, Numbers Eb ){
        Numbers Ec;
        Ec.a = Ea.a + Eb.a;
        return Ec;                                       //returning the object.
    }
};

int main(){
    Numbers E1, E2, E3;
    E1.a = 50;
    E2.a = 100;
    E3.a = 0;

    cout << "Initial values of Objects are:" << endl;
    cout << "E1.a = " << E1.a << endl;
    cout << "E2.a = " << E2.a << endl;
    cout << "E3.a = " << E3.a << endl;

    E3 = E3.add(E1, E2);                                //passing object as an argument.

    cout << "Initial values of Objects are:" << endl;
    cout << "E1.a = " << E1.a << endl;
    cout << "E2.a = " << E2.a << endl;
    cout << "E3.a = " << E3.a << endl;

}