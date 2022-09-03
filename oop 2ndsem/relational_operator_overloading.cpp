/* Wap to show the use of relational operator overloading */

#include<iostream>
using namespace std;

class Greater_Area{
    private:
        int l;
        int b;
        int a;
    public:
        Greater_Area(){
            l = 0;
            b = 0;
            a = l * b;
        }
        Greater_Area(int x, int y){
            l = x;
            b = y;
            a = l * b;
        }
        bool operator < (const Greater_Area A){
            if (a < A.a){
                return true;
            }
            if (a == A.a){
                return true;
            }
            return false;
        }
    

};
int main(){
    Greater_Area A1(10,20), A2(20,30);
    if (A1 < A2)
        cout << "A2 is greater than A1" << endl;
    else
        cout << "A1 is greater than A2" << endl;
    return 0;
}