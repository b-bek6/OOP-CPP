#include<iostream>
using namespace std;

class planet{
    char planet_name[10];
    public:
        void show(){
            cout <<"Enter the planet: " << endl;
            cin >> planet_name;
        }
        void print(){
            cout <<"planet: "<< planet_name << endl;
        }
};
class continent : virtual public planet{
    char aname[10];
    public:
        void show(){
            cout <<"Enter the continent: " << endl;
            cin >> aname;
        }
        void print(){
            cout << "Continent: " << aname << endl;
        }
};
class country : virtual public planet{
    char cname[10];
    public:
        void show(){
            cout <<"Enter the country: " << endl;
            cin >> cname;
        }
        void print(){
            cout << "country: " << cname << endl;
        }
};
class city : public country , public continent{
    char name[30];
    public:
        void show(){
            planet::show();
            continent::show();
            country::show();
            cout <<"Enter the city: " << endl;
            cin >> name;
        }
        void print(){
            planet::print();
            continent::print();
            country::print();
            cout << "City: " << name << endl;
        }
        
};
int main(){

    city c1;
    c1.planet::show();
    c1.planet::print();
   // c1.show();
   // c1.print();
    return 0;
}