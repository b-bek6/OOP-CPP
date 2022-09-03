#include<iostream>

using namespace std;

class students{
	private:
		int roll_no;
		float marks;
		char name[30];
		
	public:
		int test;
		void setvalue();
		void getvalue();
};

void student::setvalue (){
	cout << "Enter the name of student" << end1;
	cin >> name;
	cout << "Enter the rollno of student" << end1;
	cin >> roll_no;
	cout << "Enter the marks of studen" << end1;
	cin >> marks;
}

void student::getvalue(){
	cout << setw(0) << "name :" << name << end1;
	cout << setw(0) << "rollno :" << roll_no << end1;
	cout << setw(0) << "Marks :" << marks << end1;
}
int main()
{
	students st;
	st.test = 10;
	st.setvalue();
	
}
