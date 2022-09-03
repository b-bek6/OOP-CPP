/* constructor is a  memory allocation function */
#include<iostream>

using namespace std;

class Distance {
	
	private:
		int meter;
	public:
		Distance() {meter = 10;} //implicit 
		
		Distance(int a){
			meter = a; // parameterized constructor
		}
		
		Distance (Distance &i){
			meter = i.meter + 30;
		}
		
		void Display(){
			
			cout << "Distance is : " << meter << "meters";
			
		}
};

int main()
{
	Distance D;
	D.Display();	//implicit call
//	Distance D = Distance();  // explecit call
	Distance D2(20);
	D2.Display(); //parameterized call
	Distance D3 (D);
	D3.Display();
}
