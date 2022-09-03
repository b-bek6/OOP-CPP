/* Program using multiple catch blocks for a single tyr block 

#include<iostream>

using namespace std;

int main(){
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    try{
        char *string;
        if (size<=0)
            throw 's';
            string = new char[size];
            for (int n = 0; n <= 100; n++){
                if(n>size-1)
                throw n;
            }
    }
    catch (int i){
        cout << "Exception: ";
        cout << "index" << i << " is out of range." << endl;
    }
    catch (char c){
        cout << "Exception: " << c << " Size must be non-zero positive number: " << endl;
    }
    return 0;
}
//function invoked;
*/
#include<iostream>
using namespace std;
void  dv(int a, int b){
    if (b==0)
        throw b;
    else
        cout << float(a/b) << endl;
};
int main(){
    try{
        dv(8,1);
    }
    catch (int i){
        cout << "Error"<< endl;
    }
    return 0;
}
