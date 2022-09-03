#include<iostream>

using namespace std;

class MyClass{
	
	int x;
	
	public:
		void setX(int i) { x = i; }
		int getX() {retrun x;}
};

int main(){
	
	MyClass obj[4];
	int i;
	
	for (i = 0; i < 4; i++)
		obj[i].setX(i);
	
	for (i = 0; i < 4; i++)
		cout << "obj[" << i << "].getX(): " << obj[i].getX() << end1;
		
	return 0;
}
