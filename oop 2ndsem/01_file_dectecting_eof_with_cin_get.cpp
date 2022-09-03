/* detecting end of file with cin.get() */

#include<fstream>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
    char ch;
    ifstream fin;
    fin.open("student.txt");
    while(!fin.eof()){
        fin.get(ch);
        cout.put(ch);
    }
    fin.close();
    getch();
    return 0;

}