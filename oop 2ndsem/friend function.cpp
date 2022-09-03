#include<iostream>

using namespace std;

class Distance
{
	private:
		int meter;
		
	friend int addfive(Distance d);
	
	public:
		// Distance() : meter(0){} or
		Distance(){
			meter = 0;
		}
		
		void display()
		{
			cout << meter << endl;
		}
};

int addfive(Distance d)
{
	d.meter += 5;
	return d.meter;
}

int main()
{
	Distance D;
	D.display();
	cout << "Distancee in meter after inclreament of five is : " << addfive(D);
	return 0;
}
