#include<iostream>
using namespace std;

class Sum_of_obj{
    private:
        int a;
        int b;
    public:
        Sum_of_obj(){
            a = 0;
            b = 0;
        }
        Sum_of_obj(int x, int y){
            a = x;
            b = y;
        }
        Sum_of_obj operator +(Sum_of_obj S1){
            Sum_of_obj temp;
            temp.a = a + S1.a;
            temp.b = b + S1.b;
            return temp;
        }
        void display(){
            cout << "Sum Of boj:\n" << "A = " << a << "\n" << "B = " << b << endl;
        }

};
int main(){
    Sum_of_obj A1(10,20), A2(20,30), A3;
    A3 = A1 + A2;
    A3.display();
}