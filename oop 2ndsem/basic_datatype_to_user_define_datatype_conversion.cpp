/* WAP to show the use of conversion from basic datatype to user define datatype */

#include<iostream>
#include<conio.h>
using namespace std;

class Distance{
    private:
        int feet;
        int inch;
    public:
        Distance(int f, int i){
            feet = f;
            inch = i;
        }
        Distance(float m){
            feet = int(m); 
            inch = 12 * (m - feet);
        }
        void display(){
            cout << "Feet = " << feet << endl << "Inch = " << inch;
        }
};
int main(){
    float f = 2.5;
    Distance d = f;
    d.display();
    getch();
    return 0;
}