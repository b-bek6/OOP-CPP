/* #include<iostream>
using namespace std;
class A{
    int x, y;
    public:
        friend void addfive(A o);
        A(int x, int y){
            this->x=x;
            this->y=y;
        }
};
void addfive(A o){
        cout << "The value of x is: " << o.x << " and value of y is " << o.y ;      
};

int main(void){
    A a(10,7);
    addfive(a);
    return 0;
}
#include<iostream>
using namespace std;
class A{
    int x;
    friend class B;
    public:
        A(){
            x=10;
        }
};
class B{
    int y;
    public:
        B(){
            y = 5;
        }
        int add(){
            A a;
            return a.x+y;
        }
};

int main(){
    B b;
    cout << b.add() << endl;
    return 0;
}
get(c)
put(c)
char name[100]
getline(name,100)
char c;
cout<<get(c)
cin.put(c)
#include<iostream>
using namespace std;
int main(){
    char c, name[100];
    string x;
    cout << "enter the character"<< endl;
    cin.get(c);
    cout.put(c);
    cout <<"enter the sentence::"<< endl;
    cin.getline(name,100);
    cout << name << endl;
    cout <<"enter the sentence::"<< endl;
    getline(cin,x);
    cout << x << endl;
    return 0;


}
*/