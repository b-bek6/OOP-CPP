#include<iostream>
using namespace std;

class Hi{
	int l;
	
	friend int addfive(Hi d);
	
	public:
		Hi(){
			l=0;
		}
		void display(){
			cout<< "Initial value: " << l << endl;
		}
};

int addfive(Hi d){
	d.l += 5;
	return d.l;
}

int main(){
	Hi D;
	D.display();
	cout << "Final value: " << addfive(D) << endl;
	return 0;
}
