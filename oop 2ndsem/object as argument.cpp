#include<iostream>

using namespace std;

class MySum
{
	private:
		int num1, sum;
		
		public:
			
			void setnum(int a)
			{
				num1 = a;
			}
			
			void addition(MySum obj1, MySum obj2)
			{
				sum = obj1.num1 +obj2.num1;
			}
			
			void display()
			{
				cout << "The sum is: " << sum;
			}
};

int main()
{
	MySum obj1, obj2, obj3;
	int a,b;
	cout << "Enter the number: " << endl;
	cin >> a;
	cout << "Enter the number: " << endl;
	cin >> b;
	obj1.setnum(a);
	obj2.setnum(b);
	obj3.addition(obj1,obj2);
	obj3.display();
}
