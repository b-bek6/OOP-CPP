/* data member acc no, balance, min_balance(static);*/

#include<iostream>
using namespace std;
#define SIZE 5

class Account{
    private:
        string acc_no;
        float balance;
        static float min_balance;
    public:
        void read(){
            cout << "Enter Account Number and Balance: " << endl;
            cin >> acc_no >> min_balance;
        }
        void display(){
            cout <<"Account Number: " << acc_no << endl << " Balance: " << balance << endl;
        }
        static void staticRead(){
            cout << "Enter the minimum balance: " << endl;
            cin >> min_balance;
        }
        static void staticDisplay(){
            cout << "The minumum balance is: " << min_balance << endl;
        }
};
int main(){
    Account A[SIZE];
    int i;
    Account :: staticRead();
    for (i=0;i<5;i++){
        A[i].read();
        A[i].display();
        A[i].staticDisplay();
    };
    return 0;
}
