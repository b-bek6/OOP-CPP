/*Program to understand Exception handling try catch and throw */

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter any two number for division: " << endl;
    cin >> a >> b;

    try{
        if(b == 0)
            throw b;
        else
            cout << a << " / " << b << " is " << (float) a/b ;
    }
    catch( int i ){
        cout <<"Divide by zero is exception: B = " << i << endl;
    }
    return 0;
}