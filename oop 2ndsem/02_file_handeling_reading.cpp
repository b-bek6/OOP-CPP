#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char ch;
    ifstream fin;
    fin.open("dinesh.txt");
    while (!fin.eof()){
        fin.get(ch);
        cout.put(ch);
    }
    fin.close();
    return 0;
}