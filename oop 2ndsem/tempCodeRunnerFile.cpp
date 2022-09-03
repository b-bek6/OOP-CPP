
using namespace std;
template <class T, class U>
class A{
	T a;
	U b;
	
	public:
		A (T a, U b){
			this-> a = a;
			this-> b = b;
		}
		
		void display(){
			cout << a << b << endl;
		}
};
