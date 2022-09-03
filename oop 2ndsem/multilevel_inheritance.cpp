/* WAP to understand multilevel inheritance
    A
    \
    B
    \
    C
*/

#include<iostream>
#include<stdio.h>
using namespace std;

class Student{
    private:
        int roll;
        char name[20];
    public:
        void getStudent(){
            cout << "Enter Roll no and Name of student: "<< endl;
            cin >> roll >> name;
        }
        void printStudent(){
            cout <<"Roll no: " << roll << endl << "Name: " << name << endl;
        }
};

class Marks : public Student{
    private:
        int s1,s2,s3;
    public:
        void getMarks(){
            cout << "Enter the marks of 3 subject: " << endl;
            cin >> s1 >> s2 >> s3;
        }
        int totalMarks(){
            return s1 + s2 + s3;
        }
        void printMarks(){
            cout << "Marks of three subject are:" << endl << s1 << endl << s2 << endl << s3 <<endl;
        }
};

class Result : public Marks{
        private:
            int total;
            float average;
        public:
            void getResult(){
                getStudent();
                getMarks();
            }
            void printResult(){
                total = totalMarks();
                average = total/3;
                printStudent();
                printMarks();
                cout << "Total marks is: " << total << endl << "Average is: " << average << endl;
            }
};

int main(){
    Result r1;
    r1.getResult();
    r1.printResult();
    return 0;
}