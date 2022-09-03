//multiple class bata friend function
#include<iostream>

using namespace std;

class Breadth;  //forward declaration (Compiler lai tha hudaina aagadi nai)

class Length{
	
	private:
		int l;
		
	public:
		Length() : l(5) {}
		
		friend int add (Length, Breadth);
		
};

class Breadth{
	
	private:
		int b;
		friend int add(Length, Breadth);
	
	public:
		Breadth () { b = 10	}
};

int add(Length x, Breadth y)
{
	int sum = x.l + y.b;
	return sum;
}

int main()
{
	Length obj1;
	Breadth obj2;
	cout <<"Distance : " << add(ovj1, obj2) << end1;
	return 0;
}
