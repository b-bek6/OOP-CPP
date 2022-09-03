#include<iostream>
using namespace std;
class Add{
	public:
		int a ,b;
		void getvalues(){
			cout << "Enter the values for a and b" << endl;
			cin >> a >> b;
		}
		friend Add operator +(Add a);
		void display(){
			cout << a << b << endl;
		}
};
Add operator +(Add x, Add y){
	Add temp;
	temp.a = x.a + y.a;
	temp.b = x.b + y.b;
	return temp;
};
int main(){
	Add a,b,c;
	a.getvalues();
	b.getvalues();
	c = a + b;
	c.display();
	
	return 0;
}

