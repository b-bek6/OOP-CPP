#include<iostream>

using namespace std;

class Area{
	
	private:
		int l,b;
		int a;
	
	public:
		
		Area(){
			l=10;
			b=20;
			a=l*b;   
		}
		Area(int x, int y){
			l = x;
			b = y;
			a = l * b;
		}
		Area (Area &a1){
			l = a1.l + 10;
			b = a1.b + 10;
			a = l*b;
		}
		
		void Display(){
			cout << "Length = " << l << "\n";
			cout << "Breadth = " << b << "\n";
			cout << "Area = " << a << "\n";
		}
		~Area{
			delete arr;
		}
		
};

int main(){
	Area a1;
	a1.Display();
	Area a2(10,10);
	Area a3(a1);
	a2.Display();
	a3.Display();
}
