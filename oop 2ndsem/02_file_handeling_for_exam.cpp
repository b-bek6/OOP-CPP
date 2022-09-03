#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int age;
    char name[30], sec[2];
    ofstream ofile("dinesh.txt",ios::out );
    cout << "Enter name age and sec: " << endl;
    cin >> name >> age >> sec;
    ofile << name << endl;
    ofile << "\t" << endl;
    ofile << age << endl;
    ofile << "\t" << endl;
    ofile << sec << endl;
    ofile.close();
    return 0;

}