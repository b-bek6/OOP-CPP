/* WAP to understand hierarchical inheritance 
  a 
 \ \
  b c
*/

#include<iostream>
#include<stdio.h>
using namespace std;

class Car{
    private:
        string type;
    public:
        void getCar(){
            cout << "Enter the type of car: " << endl;
            cin >> type;
        }
        void printCar(){
            cout << "Type of car is: " << type << endl;
        }
};
class EV : public Car{
    private:
        int unit;
    public:
        void getEV(){
            getCar();
            cout << "Enter the unit of EV" << endl;
            cin >> unit;
        }
        void printEV(){
            printCar();
            cout<< "Consumption of electricity is " << unit << " Unit" << endl;
        }

};
class Oil : public Car{
    private:
        int liter;
    public:
    void getOil(){
            getCar();
            cout << "Enter the liter of EV" << endl;
            cin >> liter;
        }
    void printOil(){
            printCar();
            cout<< "Consumption of electricity is " << liter << " liter" << endl;
        }
};
int main(){
    EV e;
    e.getEV();
    Oil o;
    o.getOil();
    cout << "---------------" << endl;
    e.printEV();
    o.printOil();
}

