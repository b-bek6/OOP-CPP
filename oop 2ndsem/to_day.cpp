#include<iostream>
using namespace std;

class Beni{
        private:
            int ward_no;
            char muni[20];
            friend class jyamrukot;
        public:
            void getValues(){
                cout << "Enter ward no and Municipality" << endl;
                cin >> ward_no >> muni;
            }
            void printData(){
                cout << "Your ward is: " << ward_no << " Your Municipality is: " << muni << endl;
            }
};

class jyamrukot{
    char tole[20];
    public:
        void friendvalue(){
            cout << "Enter tole" << endl;
            cin >> tole;
        }
        void frienddisplay(){

        }
}