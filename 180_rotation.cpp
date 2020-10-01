// C++ program to rotate a matrix by 180 degrees
#include <bits/stdc++.h>
#define R 3
#define C 4
using namespace std;

// Function to Rotate the matrix by 180 degree
void rotateMatrix(int mat[][C])
{
	// Simply print from last cell to first cell.
	for (int i = R - 1; i >= 0; i--) {
		for (int j = C - 1; j >= 0; j--)
			printf("%d ", mat[i][j]);

		printf("\n");
	}
}

// Driven code
int main()
{
	int mat[R][C] = {
		{ 1, 2, 3,10},
		{ 4, 5, 6 , 11},
		{ 7, 8, 9 , 12},

	};

	rotateMatrix(mat);
	return 0;
}

