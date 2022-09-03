#include<iostream>
using namespace std;
template <typename U, typename T>

class Addition{
	public:
		U x;
		T y;
		void getValue(U a ,T b){
			x = a;
			y = b;
		}
		U add(){
			return (x+y);
		}
};

int main(){
	Addition<int,float> A;
	A.getValue(30,30.9999);
	cout << A.add() << endl;
	return 0;
}