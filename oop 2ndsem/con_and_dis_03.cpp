#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth;
        int *height;
    public:
        Area(){   // default constructor
            length = 10;
            breadth =10;
        }
        Area(int x, int y){ //parameterized constructor
            length = x;
            breadth = y;
        }
        Area( Area &o){
            length = o.length + 5;
            breadth = o.breadth + 5;
        }
        ~Area(){
            
            cout << "Distructor has done its job." << endl;
            delete height;
        }
        void display(){
            cout << "Length = " << length <<" Breadth = " << breadth << "Area = " << length*breadth << endl;
        }
};

int main(){
    Area a, a1(5,10), a2(a1);
    a.display(); 
    a1.display();
    a2.display();
    return 0;

}