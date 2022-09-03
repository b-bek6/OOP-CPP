#include<iostream>
using namespace std;

template <typename U, typename T>

class Addition{
    public:
        U x;
        T y;
        void getValue(U a, T b){
            x = a;
            y = b;

        }
        void addition(){
            cout << "The addition of two number is: " << x+y << endl;
        }
};
int main(){
    Addition<int,float> A;
    A.getValue(3,3.0002);
    A.addition();

    Addition<float,float> A1;
    A1.getValue(3.2121,3.0002);
    A1.addition();
}