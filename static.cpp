#include<iostream>
using namespace std;
class Test{
	private:
		int a;
		int b;
		static int count;
	public:
		void getvalue(){
			cout << " Enter the value of a and b" << endl;
			cin >> a;
			cin >> b;
			count++;
		}
		void display(){
			cout << "The sum of a and b is: " << a+b << endl;
			cout << count << endl;
		}
};
int Test::count = 0;

int main (){
	Test a1,a2,a3;
	a1.getvalue();
	a1.display();
	a2.getvalue();
a2.display();
	a3.getvalue();
	
	a3.display();
	return 0;
}
