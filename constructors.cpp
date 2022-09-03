#include<iostream>

using namespace std;

class Area{
	private:
		int length;
		int breadth;
		
	public:
		Area() // default constructor
		{
			length = 10;
			breadth = 20;
		}
		Area(int a, int b) // parameterized constructor
		{
			length = a;
			breadth = b;
			
		}
		Area(Area &a1) // copy constructor
		{
			length = a1.length + 10;
			breadth = a1.breadth + 10;
		}
		void display(){
			cout << "Length = "<< length << endl;
			cout << "Breadth = "<< breadth << endl;
		}
};
int main(){
	Area a1, a2(2,5), a3(a1);
	a1.display(); // implicit call
	// Area a1 = display(); // explict calls
	a2.display(); //parameterized call
	a3.display();
	return 0;
}
