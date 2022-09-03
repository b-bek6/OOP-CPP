#include<iostream>

using namespace std;

class dist{
	int feet, inch;
	
	public:
		dist()
		{
			feet = 0;
			inch = 0;
		}
	
		dist(int a, int b)
		{
			feet = a;
			inch = b;
		}
		
		void operator =(dist &d)
		{
			feet = d.feet;
			inch = d.inch;
		}
		
		void display()
		{
			cout << "Feet: " << feet << "Inch : " << inch << endl;
		}
};

int main(){
	
	dist d1(11,10), d2(5,11);
	cout <<"First Distance: " << endl;
	d1.display();
	cout <<"Second Distance: " << endl;
	
	d2.display();
	 d1 = d2;
	 
	 cout << "First Distance: "<< endl;
	 d1.display();
	 return 0;
}
