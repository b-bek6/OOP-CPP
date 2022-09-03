#include<iostream>
using namespace std;

class Preinc{
    int x;
    int y;
    public:
        void read(){
            cout <<"enter for the value of x:" << endl;
            cin >> x >> y;
        }
        
        void operator ++(){
            ++x;
            ++y;
        }
        void display(){
            cout << x << endl << y << endl;
        }
};
int main(){
    Preinc a;
    a.read();
    ++a;
    a.display();
    return 0;


}