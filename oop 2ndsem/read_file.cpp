/* WAP to read a file */

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[20];
    int age;
    char sec;
    ifstream ofile("Student.txt");
    ofile >> name;
    ofile >> age;
    ofile >> sec;
    cout << name << age << sec;
    ofile.close();
    return 0;
}