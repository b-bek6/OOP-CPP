#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ifstream fin;
    fin.open("hostel.txt");
    while(!fin.eof()){
        fin.get(ch);
        cout.put(ch);
    };
    return 0;
}