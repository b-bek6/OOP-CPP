/* we have endl, setw and setprecision as manipulators 
endl is used to insert a new line character during the output stream 
setw or set weight is use for specify the minimum number of character position on the output field 
a variable 
setprecision is used to set the precision to the float numbers after the decimal values to the right for n 

*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
    cout <<"my name is bibek" << endl;
    cout<<setw(11)<<"bibek"<<endl<<setw(11)<<"ghimire";
    cout << setprecision(34453) << 5.23233 << endl;
    cout<<setw(11)<<"Kantipur"<<endl <<setw(11)<<"Engineering"<<endl<<setw(11)<<"College";
    float a = 42.3658945, b = 35.24569, c = 58.3214789, d = 49.321489;
    cout<<a<<endl <<setprecision(3)<<b<<endl<<c<<endl<<setprecision(2)<<d;

}