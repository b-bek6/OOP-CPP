#include<iostream>
using namespace std;

class Divide{
    public:
        int x,y;

        void setValue(){
            cout << "Enter the divisor: " << endl;
            cin >> x;
            cout << "Enter dividend: " << endl;
            cin >> y;
        }
        void divide(){
            try{
                if (y == 0)
                    throw y;
                else
                    cout << "The answer is: " << x/y << endl;
            }
            catch( int y ){
                cout <<"Undefined!!!" << endl;
            }
        }
};

int main(){
    Divide D;
    D.setValue();
    D.divide();
    return 0;
}