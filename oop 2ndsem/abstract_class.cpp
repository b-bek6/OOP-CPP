#include<iostream>
using namespace std;

class Shape{
	protected:
		int height, width;
	public:
		virtual int Area() = 0;
		
		void setHeight(int x) {
			height = x;
		}
		void setWidth(int x){
			width = x;
		}
};
class Rectangle : public Shape{
	public:
		int Area(){
			return (height * width);
		}
	};
class Triangle : public Shape{
public:
	int Area(){
		return (height * width)/2;
	}
};
int main(){
	Rectangle R;
	Triangle T;
	
	R.setHeight(10);
	R.setWidth(20);
	
	T.setHeight(10);
	T.setWidth(20);
	
	cout << "The area of Rectangle is: " << R.Area() << endl;
	cout << "The area of Triangle is: " << T.Area() << endl;
	return 0;
}