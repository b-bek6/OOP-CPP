#include<iostream>
using namespace std;

class Division{
	public:
		int x,y;
		void getValue(){
			cout << "Enter the dividend: " << endl;
			cin >> x;
			cout << "Enter the divisor: " << endl;
			cin >> y;
		}
		void divide(){
			try{
				if (y == 0)
					throw y;
				else
					cout << x / y << endl;
			}
			catch (int y){
				cout << "Undefined!!!" << endl;
			}
		}
		
};

int main(){
	Division D;
	D.getValue();
	D.divide();
	return 0;
}
