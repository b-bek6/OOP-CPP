#include<iostream>

using namespace std;

class weight{
	
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
		
		void operator ++(int kg) // postorder increament
		{
			++kg;
		}
		
		// weight opertor ++() // preincreament
		// {
		// 	weight temp;
		// 	temp.kg = ++kg;
		// 	return temp;
		// }
};

int main()
{
	weight MyWt;
	
	MyWt++;
	++MyWt;
	
	MyWt.display();
}
