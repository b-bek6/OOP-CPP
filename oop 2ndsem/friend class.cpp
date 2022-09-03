// #include<iostream>

// using namespace std;

// class Exmp_A
// {
// 	private:
// 		int x;
// 		friend class Exmp_B;
		
// 	public:
// 		Exmp_A() : x(9) {}
// };

// class Exmp_B{
	
// 	private:
// 		int y;
		
// 	public:
// 		Exmp_B() : y(13) {}
		
// 		int sum()
// 		{
// 			Exmp_A a;
// 			return a.x + y;
// 		}
// };

// int main()
// {
// 	Exmp_B b;
	
// 	cout << "Sum is : " << b.sum();
	
// 	return 0;
// }

#include<iostream>
using namespace std;

class first{
	private:
		int a;
		friend class second;
	public:
		first() : a(10) {};
};

class second{
	private:
		int b;
	public:
		second() : b(10) {};

		int sum(){
			first x;
			return x.a+b;
		}
};
int main(){
	second B;
	cout << B.sum() << endl;
	return 0;
}