/* WAP to understand single level inheritance 
A
|
B*/

#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        Student(string n, int a){
            name = n;
            age = a;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class ForeignStudent : private Student{
    private:
        string country;
    public:
        ForeignStudent(string n, int a, string c):Student(n,a){
            country = c;
        }
        void foreigndisplay(){
            display();
            cout << "Country: " << country << endl;
        }
};
int main(){
    ForeignStudent s("Bibek",20,"America");
    s.foreigndisplay();
    getch();
    return 0;

}
