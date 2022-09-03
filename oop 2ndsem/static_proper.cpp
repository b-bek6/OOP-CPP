/* data member acc no, balance, min_balance(static);*/

#include<iostream>
using namespace std;

class Account{
    private:
        string acc_no;
        float balance;
        static int min_balance;
    public:
        void read(){
            cout << "Enter Account Number and Balance: " << endl;
            cin >> acc_no >> balance;
        }
        void display(){
            cout <<"Account Number: " << acc_no << endl << " Balance: " << balance << endl;
        }
        static void Reads(){
            cout << "Enter the minimum balance: " << endl;
            cin >> min_balance;
        }
        static void displays(){
            cout << "The minumum balance is: " << min_balance << endl;
        }
};
int Account :: min_balance = 0;
int main(){
    Account A[5];
    int i;
    Account :: Reads();
    for (i=0;i<5;i++){
        A[i].read();
    }
    for (i=0;i<5;i++){
        A[i].display();
        A[i].displays();
    }
    return 0;
}