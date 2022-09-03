#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

class Student{
    int roll;
    char name[30];
    char address[60];
    public:
        void read_data();
        void write_data();
};
void Student :: read_data(){
    cout <<"Enter roll no, name and address: " << endl;
    cin >> roll >> name >> address ;
}
void Student :: write_data(){
    cout << roll << endl;
    cout << name << endl;
    cout << address << endl;
}
int main(){
    Student s;
    int i;
    ofstream fout;
    fout.open("Hostel.txt");
    for (i=0;i<1;i++){
        s.read_data();
        fout.write((char*)&s,sizeof(Student));
    };
    fout.close();
    cout << "Write is complete" << endl;
    getch();
    return 0;
}