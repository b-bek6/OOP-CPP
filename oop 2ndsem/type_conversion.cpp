// // type converson 

// #include<iostream>
// using namespace std;
// class Time
// {
// 	int hours, minutes;
	
// 	public:
// 		Time()
// 		{
// 			hours = 0;
// 			minutes = 0;
// 		}
// 		Time (int t)
// 		{
// 			hours = t/60;
// 			minutes = t%60;
// 		}
// 		void display()
// 		{
// 			cout << "Hours : " << hours << endl << "Minutes : " << minutes << endl;	
// 		}
// };

// int main()
// {
// 	int duration;
// 	Time d;
// 	cout << "Please provide the duration: " << endl;
// 	cin >> duration;
// 	d = duration;
// 	d.display();
// 	return 0;
// }

// basic type to user define type
/*
#include<iostream>
using namespace std;

class Distance{
    int feet, inch;
    public:
        Distance(int f, int i){
            feet = f;
            inch = i;
        }
        Distance(float M){
            feet = int(M);
            inch = 12*(M - feet);
        }
        void display(){
            cout << "Feet = " << feet << " Inch = " << inch << endl;
        }
};
int main()
{
    float a = 12.4;
    Distance d = a;
    d.display();
    return 0;
}


// User define to basic

#include<iostream>
using namespace std;
class Distance{
    int y, x;
    public:
        Distance (int x, int y){
            this-> x = x;
            this-> y = y;
        }
        operator float(){
            float a = x + y/12.0;
            return a;
        }

};
int main()
{
    float a;
    Distance D(8,6);
    a = (float)D;
    cout << a << endl;
    return 0;
}

// user define to user define 
//nepali rs int USD 1usd = 120rs
#include<iostream>
using namespace std;

class Currency{
    float x;
    public:
        Currency(float USD){
            x = USD;
        }
        operator float(){
            float rs = x*120;
            return rs;
        }
};
int main(){
    Currency c(1200.2938);
    float x;
    x = (float)c;
    cout << x << endl;
    return 0;
}

*/
#include<iostream>
using namespace std;

int main()