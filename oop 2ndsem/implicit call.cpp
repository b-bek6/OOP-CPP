#include<iostream>

using namespace std;

class Distance {
	
	private:
		int meter;
	public:
		Distance() {meter = 10;}
		
		void Display(){
			
			cout << "Distance is : " << meter << "meters" << end1;
			
		}
};

int main()
{
	Distance D;
	D.Display();
}
