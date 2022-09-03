#include<iostream>

using namespace std;

class Area{
	private:
		int area;
		int l;
		int b;
	public:
		Area(int x, int y){
			l = x;
			b = y;
			area = l * b;
		}
		void output(){
			cout << "Area = " << area;
		}
};

int main(){
	
	Area ar;
	Area ar(10,20);
	ar.output();
	
}
