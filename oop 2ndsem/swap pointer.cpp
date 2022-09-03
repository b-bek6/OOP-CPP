#include<stdio.h>
#include<iostream>

using namespace std;

int swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}

int main(void){
	int a,b;
	cout<<"enter the value of a and b";
	cin>>a;
	cin>>b;
	cout << "Before swap" <<" A=" <<a<<" B="<<b;
	swap(&a,&b);
	cout<<"A="<<a;
	cout<<"B="<<b;
	return 0;
}
