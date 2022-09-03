#include<iostream>

using namespace std;

class Employee
{
	int id;
	char name[30];
	int phone;
	static int totalEmployee;
	
	public:
		void setEmployee()
		{
			cout << "Enter the id of Employee: "<< endl;
			cin >> id;
			cout << "Enter the name of Employee: " << endl;
			cin >> name;
			cout << "Enter the phone of Employee: " << endl;
			cin >> phone;
			totalEmployee++;
		}
		
		void getEmployee()
		{
			cout << "The emoloyee id is : " << id <<endl;
			cout << "The emoloyee name is : " << name <<endl;
			cout << "The emoloyee phone is : " << phone <<endl;
			cout << "The total emoloyee is : " << totalEmployee <<endl;
		}
		
		static int gettotalEmployee(){
			return totalEmployee;
		}
};

int Employee::totalEmployee = 0;
int main()
{
	Employee obj[4];
	int i;
	for (i = 0; i < 4; i++)
		obj[i].setEmployee();
	
	for (i = 0; i < 4; i++){
		cout << endl;
		obj[i].getEmployee();
		
	}
		
		
	return 0;
}
