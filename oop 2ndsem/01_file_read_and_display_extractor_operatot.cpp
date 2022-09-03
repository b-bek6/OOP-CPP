/*Program to read the content of a text file and display them on the screen using extraction operator */

#include<fstream>
#include<iostream>

using namespace std;

int main(){
    char str[30];
    ifstream fin;
    fin.open("student.txt");
    while(!fin.eof()){
        cout<<str;
    }
    fin.close();
    return 0;
}