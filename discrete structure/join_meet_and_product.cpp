/* Program to find join, meet and procduct of zero one matrices */

#include <iostream>
#include <iomanip>
using namespace std;

void MatrixConverter(int x[3][3]);
void MatrixPrinter(int x[3][3]);

void Meet(int A[3][3], int B[3][3]);
void Join(int A[3][3], int B[3][3]);

int main()
{
	int Matrix_A[3][3] = {{0}}; 
	int Matrix_B[3][3] = {{0}};

	MatrixConverter(Matrix_A);
	MatrixConverter(Matrix_B);

	Meet(Matrix_A, Matrix_B);

	return 0;
}

void Meet(int A[3][3], int B[3][3])
{
	int C[3][3] = {{0}};

	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			C[i][j] = A[i][j] && B[i][j];
	}

	cout << "A ^ B" << endl;
	MatrixPrinter(C);
}

void Join(int A[3][3], int B[3][3])
{
	int C[3][3] = {{0}};
	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			C[i][j] = A[i][j] || B[i][j];
	}

	cout << "A v B" << endl;
	MatrixPrinter(C);
}

void MatrixConverter(int x[3][3])
{
	int C[3][3] = {{0}};
	int NumPairs;

	int k;
	int j;

	cout <<"Enter the number of ordered pairs? ";
	cin >> NumPairs;
	cout << endl;

	for(int i = 0; i < NumPairs; i++)
	{
		cout << "Enter first element of ordered pair " << i + 1 << ": ";
		cin >> k;

		cout << "Enter second element of ordered pair " << i + 1 << ": ";
		cin >> j;

		cout << endl;

		C[k-1][j-1] = 1;
	}
	
	MatrixPrinter(C);
}

void MatrixPrinter(int x[3][3])
{
	cout << "  1 2 3  " << endl;
	cout << "1" << setw(2) << x[0][0] << setw(2) << x[0][1] << setw(2) << x[0][2] << endl;
	cout << "2" << setw(2) << x[1][0] << setw(2) << x[1][1] << setw(2) << x[1][2] << endl;
	cout << "3" << setw(2) << x[2][0] << setw(2) << x[2][1] << setw(2) << x[2][2] << endl;
	cout << endl;
}