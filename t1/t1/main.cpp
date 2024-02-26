//#pragma warning (disable: 4996)

#include <iostream>;
#include <string.h>; 
using namespace std;  

const int N = 2;
const int M = 2;

int** allocateMatrix(int rows, int cols);
void enterInput(int** mat, int rows, int cols);
void printMatrix(int** mat, int rows, int cols);
void freeMatrix(int** mat, int rows);


int main()
{

	int** mat;
	mat = allocateMatrix(N, M);
	enterInput(mat, N, M);
	printMatrix(mat, N, M);
	freeMatrix(mat, N);


}



int** allocateMatrix(int rows, int cols)
{
	int** mat = new int* [rows]; // allocating the rows
	for (int i = 0; i < rows; i++)
		mat[i] = new int[cols]; // allocating the columns
	return mat;
}

void enterInput(int** mat, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			cin >> mat[i][j];
}


void printMatrix(int** mat, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << mat[i][j] << ", ";
		cout << "\n";
	}
}

void freeMatrix(int** mat, int rows)
{
	for (int i = 0; i < rows; i++)
		delete[]mat[i];
	delete[]mat;
}





