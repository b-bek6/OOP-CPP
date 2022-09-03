/* #include<iostream>
using namespace std;
template <class T, class U>
class A{
	T a;
	U b;
	
	public:
		A (T a, U b){
			this-> a = a;
			this-> b = b;
		}
		
		void display(){
			cout << a << b << endl;
		}
};

int main(){
	int a = 100;
	A <char,int>a1('a',100);
	a1.display();
	return 0;
}
 */

#include<iostream>
using namespace std;

template <class T, class U>
class A{
	private:
		T x;
		U y;
	public:
		A(T x, U y){
			this->x=x;
			this->y=y;
		}
		void show(){
			cout << x << endl << y << endl;
		}
};
int main(){
	A<int, char> a(97283,'b');
	a.show();
	return 0;
}