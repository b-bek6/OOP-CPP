#include<iostream>

using namespace std;

class Complex{
	int real, imag;
	
	public:
		
		Complex()
		{
			real = 0;
			imag = 0;
		}
		
		Complex(int r, int i)
		{
			real = r;
			imag = i;
		}
		
		Complex operator +(Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
		
		void print(){
			cout << "The real sum is: " << "The sum of imag is: " << imag << endl;
		}
};
int main()
{
	Complex c1(10,20), c2(5,7),c3;
	
	c3 = c1 + c2; // c1.add(c2);
	
	c3.print();
	return 0;
}
