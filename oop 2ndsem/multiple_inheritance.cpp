/* WAP to show the use of multiple inheritance
A  b
|  |
  c 
Two base class and one sub class
*/

#include<iostream>
#include<stdio.h>
using namespace std;

class teacher{
    private:
        int tid;
        string subject;
    public:
        teacher(int a, string s){
            tid = a;
            subject = s;
        }
        void displayteacher(){
            cout << "Teacher ID: " << tid << endl << "subject: " << subject << endl;
        }
};

class staff{
    private:
        int sid;
        string level;
    public:
        staff(int sd, string l){
            sid = sd;
            level = l;
        }
        void displaystaff(){
            cout << "Staff ID: " << sid << endl << "Staff level: " << level << endl;
        }
};

class coordinator : public teacher , public staff{
    private:
        string program;
    public:
        coordinator (int a, string s, int sd, string l, string p) : teacher(a,s),staff(sd,l){
            program = p;
        }
        void displaycoordinator(){
            displayteacher();
            displaystaff();
            cout << "Program is: " << program << endl;
        }
};

int main(){
    coordinator c1(1,"OOP",02,"+2","Football");
    c1.displaycoordinator();
    return 0;
}
