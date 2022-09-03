#include<iostream>
using namespace std;
class Exmp_A
{
	private:
		int x;
		friend class Exmp_B;		
	public:
		Exmp_A() : x(9) {}
};
class Exmp_B{	
	private:
		int y;		
	public:
		Exmp_B() : y(13) {}		
		int sum()
		{
			Exmp_A a;
			return a.x + y;
		}
};
int main()
{
	// Exmp_B b[5];	
	// cout << "Sum is : " << b[1].sum();	
	// cout << "Sum is : " << b[2].sum();	
	int i=0;
	cout << ++i << endl;
	return 0;
}
