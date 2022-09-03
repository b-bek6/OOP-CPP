#include<iostream>
using namespace std;

int fabonacci (int a){
	int b=0,c=1,temp;
	
	if (temp<=a);
	{
		temp = c;
		c = c + b;
		b = temp;
		cout << c;
	}
}
int main(){
	int n;
	cout << "Enter for N: \n";
	cin >>n;
	fabonacci (n);
	return 0;
}
