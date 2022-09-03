/*Wap to show the use of assignment operator overloading */

#include<iostream>
using namespace std;

class Distance{
    public:
        int feet;
        int inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance (int x, int y){
            feet = x;
            inches = y;
        }
        void operator = (const Distance &d){
            feet = d.feet;
            inches = d.inches;
        }
        void display(){
            cout << "The distance is:\n" << "Feet: " << feet << "\n" << "Inches: " << inches << endl;
        }
};
int main(){
    Distance d1(100,10), d2(200,12);
    d1.display();
    d2.display();
    d2 = d1;
    d2.display();
    return 0;
}