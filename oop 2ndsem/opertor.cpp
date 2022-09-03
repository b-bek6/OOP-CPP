#include<iostream>

using namespace std;

class Weight{
	
	int kg;
	
	public:
		
		weight(){
			kg = 0;
		}
		
		weight(int kg)
		{
			this->kg = kg;
		}
		
		void display()
		{
			cout << "This kg is : " << kg << endl;
		}
		
		void operator ++() // preincrement overload
		{
			++kg;
		}
		
		void operator ++(int) // postorder increament
		{
			++kg;
		}
};

int main()
{
	Weight MyWt;
	
	MyWt++;
	++MyWt;
}
