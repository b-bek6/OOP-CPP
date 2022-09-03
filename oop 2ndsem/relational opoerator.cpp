#include<iostream>

using namespace std;

class dist{
	int feet;
	int inch;
	
	public:
		
		dist(int a, int b)
		{
			feet = a;
			inch = b;
		}
		
		void display ()
		{
			cout << "Feet : " << feet << "inch : " << inch << endl;
		}
		
		bool operator < (dist d)
		{
			if (feet < d.feet)
			{
				return true;
			}
			if (feet == d.feet && inch < d.inch)
			{
				return true;
			}
			return false;
		}
		
		bool operator == (dist d)
		{
			if (feet == d.feet && inch == d.inch)
			return true;
			
			return false;
		}
		
};

int main()
{
	dist d1(13,11), d2(12,11);
	int x = 20, y = 10;
	cout << "First Distance: " << endl;
	d1.display();
	
	cout << "Second Display: " << endl;
	d2.display();
	
	if(d1 < d2)
	{
			
	}
	else
	{
		
	}
	
}
