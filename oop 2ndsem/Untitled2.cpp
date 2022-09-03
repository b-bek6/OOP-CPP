#include<iostream>

using namespace std;

class Example{
	
	public:
		int a;
		
		// This function will take as arguments and return object
		Example add (Example Ea, Example Eb)
		{
			Example Ec;
			Ec.a = Ea.a + Eb.a;
			
			return Ec;
		}
		
//		int add(int a, int b)
//		{
//			int sum;
//			sum = a + b;
//			return sum;
//		}
};

int main()
{
	Example E1, E2, E3;	// Values are initialized
	E1.a = 50;
	E2.a = 100;
	E3.a = 0;
	
	cout << "Initial Values \n";
	cout << " Value of object 1: " << E1.a << ", \n object 2: " << E2.a << ", \nobject 3: "<< E3.a << endl;
	
	E3 = E3.add(E1, E2);
	
	cout << "New values \n";
	cout <<"Value of object 1: " << E1.a <<", \nobject 2: " << E2.a <<", \n object 3: " << E3.a << endl;
	
	return 0;
	
}


