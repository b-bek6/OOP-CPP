// type converson 

#include<iostream>
using namespace std;
class Time
{
	int hours, minutes;
	
	public:
		Time()
		{
			hours = 0;
			minutes = 0;
		}
		Time (int t)
		{
			hours = t/60;
			minutes = t%60;
		}
		void display()
		{
			cout << "Hours : " << hours << endl << "Minutes : " << minutes << endl;	
		}
};

int main()
{
	int duration;
	Time d;
	cout << "Please provide the duration: " << endl;
	cin >> duration;
	d = duration;
	d.display();
	return 0;
}
