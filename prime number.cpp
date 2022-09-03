// wap to print all the prime numbers from 1 to 100
#include<iostream>

using namespace std;

class Prime{
	private:
		int a;
		int i,j,count;
	public:
		void prime(){
		for(int i=2;i<=100;++i)

    {   int ctr=0;

        for(int j=2;j<=i/2;++j)

        {   if(i%j==0)

                ctr=1;

        }

        if(ctr==0)

                cout<<i<<" ";

    }
		}
	
};

int main(){
	Prime a1;
	a1.prime();
	return 0;
}
