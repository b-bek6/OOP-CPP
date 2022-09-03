/* Program to write data by using write() member funtion */

#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
struct student{
    int roll;
    char name[20];
    char address[20];
};
int main(){
    int n,a=0;
    student s1;
    ofstream file;
    file.open("students.txt",ios::app);
    cout << "Enter the total no of student " << endl;
    cin >> n;
    while (a<n){
        cout <<"Enter Roll no , name and address of student: " << endl;
        cin >> s1.roll >> s1.name >> s1.address;
        file.write((char*)&s1,sizeof(student));
        a++;
    }
    
    cout << "Data is written successfully inside student file" << endl;
    file.close();
    getch();
    return 0;
}