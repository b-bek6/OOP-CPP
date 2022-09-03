/* WAP to write inside a file */

#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

int main(){
    char name[20];
    int age;
    char sec;
    string data;
    ofstream ofile;
    ofile.open("Student.txt");
    cout << "Enter name age and sec: " << endl;
    cin >> name >> age >> sec;
    ofile << name;
    ofile << age;
    ofile << sec;
    ofile.close();
    return 0;
}