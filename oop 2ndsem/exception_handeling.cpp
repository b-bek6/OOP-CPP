#include<iostream>
using namespace std;
class Vote{
    public:
        int age;

        void getValue(int x)
        {
            age = x;
        }
        void Status(){
            try {
                if (age >= 18)
                    cout << "You are eligible for vote" << endl;
                else
                    throw age;
            }
            catch (int x){
                cout << "You are not eligible for vote: " << endl;
            }
        }
};

int main(){
    Vote v;
    v.getValue(10);
    v.Status();
    return 0;
}