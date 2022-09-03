/* Create a class student which function is to get the student roll_no marks and name and display the result as well */
#include<iostream>

using namespace std;

class students{
	
	private:
		
		char name[100];
		int roll_no;
		float marks;
		static int a;
		
	public:
		
		
		void inputvalue(){
			cout << "\nenter the Name roll_no and marks of student:";
			cin >> name;
			cin >> roll_no;
			cin >> marks;
			a++;
		}
		void outputvalue(){
			cout << "Name: " << name << "\n";
			cout << "RollNo: " << roll_no << "\n";
			cout << "Marks: " << marks << "\n";
			cout << "Total student: " << a << endl;
		}
		
};

int students::a=0;

int main(){
	students st, st2;
	st.inputvalue();
	st.outputvalue();
	st2.inputvalue();
	st2.outputvalue();
}
