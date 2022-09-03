#include<iostream>
using namespace std;
class complex{
    private:
        int x,y;
        static int idpd;
    public:
        void getdetails(){
            cout << "enter for value x and y"<< endl;
            cin >> x >> y;
        }
        void operator = (const complex &a){
            y = a.y;
            y = a.y;
        }
        void print(){
            cout << x << y << endl;
            cout << idpd++ << endl;
        }

};
int complex :: idpd = 1;
int main(){
    complex a,b,c;
    a.getdetails();
    b.getdetails();
    c = a;
    a.print();
    b.print();
    c.print();
    return 0;
}