#include <stdio.h>
#include <stdlib.h>

int Partition(char* A, int p, int r)
{
	//int x = A[r], i = p - 1, aux;
	char x = A[r], aux;;
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			aux = A[i];
			A[i] = A[j];
			A[j] = aux;
		}
	}
	aux = A[i + 1];
	A[i + 1] = A[r];
	A[r] = aux;
	return i + 1;
}

void Quick_Sort(char* A, int p, int r)
{
	int q;
	if (p < r)
	{
		q = Partition(A, p, r);
		Quick_Sort(A, p, q - 1);
		Quick_Sort(A, q + 1, r);
		
	}
}


int main()
{
	char A[13];
	A[1] = 'F';
	A[2] = 'E';
	A[3] = 'R';
	A[4] = 'N';
	A[5] = 'A';
	A[6] = 'N';
	A[7] = 'D';
	A[8] = 'A';
	A[9] = 'M';
	A[10] = 'E';
	A[11] = 'L';
	A[12] = 'O';
	Quick_Sort(A, 1, 12);
}
