#include<iostream>

using namespace std;

class Demo{
	
	private:
		int num1, num2;
		int *arr;
	public:
		Demo(int n1, int n2)
		{
			cout << "Inside Constructor" << endl;
			num1 = n1;
			num2 = n2;
			arr = new int[30];
		}
		
		void display()
		{
			cout << "Num1 = " << num1 << endl;
			cout << "Num2 = " << num2 << endl;
		}
		~ Demo (){
			cout << "Inside Destructor";
			delete arr;
		}
};

int main()
{
	Demo b(1,2);
	b.display();
	return 0;
}
