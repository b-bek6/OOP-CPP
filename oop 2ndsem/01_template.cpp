/* WAP to show the use of template */

#include<iostream>
using namespace std;
template < typename T, typename U >
class A{
    public:
        T num1;
        U num2;
        A( T x, U y){
            num1 = x;
            num2 = y;
        }
        void add(){
            cout << "The sum of " << num1 <<" + " << num2 << " = " << num1+num2 << endl;
        }
};
int main(){
    A<int,float> d(50,5.555);
    d.add();
    return 0;
}