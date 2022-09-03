#include<iostream>
using namespace std;

class Address{
		
	public:
		string addressline, street, city;
		Address(string addressline,string street,string city){
			this->addressline = addressline;                       
			this->street = street;
			this->city = city;
		}
};
class Employee{
	Address *b;
	public:
		int id;
		string name;
		Employee(int id, string name, Address *b){
			this->id = id;
			this->name = name;
			this->b = b;
		}
		
		void output(){
			cout << "Name =" << name << " Id = " << id << "Address = " << b->addressline << b->street << b->city << endl;
		}
};

int main(){
	Address a1("32","beni","myagdi");
	Employee e1(23,"bibek",&a1);
	e1.output();        
	return 0;
}
