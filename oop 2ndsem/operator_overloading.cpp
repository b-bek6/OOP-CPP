/*
// binary operator +
#include<iostream>
using namespace std;

class A{
    private:
        int a, b;
    public:
        void getvalue(){
            cout << "Enter the value" << endl;
            cin >> a >> b;
        }
        A operator +(A o){
            A add;
            add.a = a + o.a;
            add.b = b + o.b;
            return add;
        }
        void print(){
            cout << a << " "<< b << endl;
        }

};

int main(){
    A a1, a2, a3;
    a1.getvalue();
    a2.getvalue();
    a3 = a1 + a2;
    a3.print();
    return 0;

}
// post increament operator 
#include<iostream>
using namespace std;

class A{
    int length, breadth;
    public:
        void getValue(){
            cout <<"Enter for a and b" << endl;
            cin >> length >> breadth;
        }
        void operator ++(){
            ++length;
            ++breadth;
        }
        void print(){
            cout << length <<" " << breadth << endl;
        }
};
int main(){
    A a,b;
    a.getValue();
    b.getValue();
    a.operator++();
    ++b;
    a.print();
    b.print();
    return 0;
}
// asignment operator
#include<iostream>
using namespace std;

class A{
    int length, breadth;
    public:
        void getValue(){
            cout <<"Enter for a and b" << endl;
            cin >> length >> breadth;
        }
        void operator =(const A &o){
            length = o.length;
            breadth = o.breadth;
        }
        void print(){
            cout << length <<" " << breadth << endl;
        }
};
int main(){
    A a,b,c;
    a.getValue();
    b.getValue();
    c = b;
    c.print();
    return 0;
}

// insertion extraction operator
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      friend ostream &operator<<( ostream &output, const Distance &D ) { 
         output << "F : " << D.feet << " I : " << D.inches;
         return output;            
      }

      friend istream &operator>>( istream  &input, Distance &D ) { 
         input >> D.feet >> D.inches;
         return input;            
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11), D3;

   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;

   return 0;
}
x
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet, inch;           // 0 to 12
      
   public:
    Distance(){};
    Distance(int x, int y){
        feet = x; 
        inch = y;
    }
    friend istream &operator >> (istream &input,Distance &d){
        input >> d.feet >> d.inch;
        return input;
    }
    friend ostream &operator <<(ostream &output,const Distance &d){
        output << "I: " << d.feet << " " << d.inch  << endl;
        return output;
    }
      
};

int main() {
   Distance d(10,10),D1;
   cout << "Enter for the value of d3" << endl;
   cin >> D1;
   cout << "second" <<D1;
   cout <<"first"<< d;

   return 0;
}

*/