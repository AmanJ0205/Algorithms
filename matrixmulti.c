#include <stdio.h>
#include <malloc.h>

void Parenthesize(int** Path, int i, int j)
{
	if (i == j)
	{
		printf (" A%d ", i + 1);
	}

	else
	{
		int K = Path[i][j];

		printf ("(");

		Parenthesize(Path, i, K);
		Parenthesize(Path, K + 1, j);

		printf (")");
	}


}

int CalculatemMinCost(int *Dimensions, int N, int **Path)
{
	int i = 0, j = 0, Diagonal = 0, CurrMin = 0, k = 0;

	int **MinCost = malloc (sizeof (int*) * N);

	for (i = 0; i < N; i++)
		MinCost[i] = malloc (sizeof (int) * N);

	for (i = 0; i < N; i++)
	{
		MinCost[i][i] = 0;
	}

	for (Diagonal = 1; Diagonal <= N - 1; Diagonal++)
	{
		for (i = 0; i <= N - 1 - Diagonal; i++)
		{
			j = i + Diagonal;

			MinCost[i][j] = MinCost[i][i] + MinCost[i + 1][j] + Dimensions[i] * Dimensions[i + 1] * Dimensions[j + 1];

			Path[i][j] = i;

			for (k = i + 1; k < j; k++)
			{
				CurrMin = MinCost[i][k] + MinCost[k + 1][j] + Dimensions[i] * Dimensions[k + 1] * Dimensions[j + 1];

				if (CurrMin < MinCost[i][j])
				{
					MinCost[i][j] = CurrMin;
					Path[i][j] = k;
				}
			}
		}

	}

	return MinCost[0][N - 1];

}

int main()
{

	int N = 0, i = 0;
	printf ("Enter number of matrices : ");
	scanf ("%d", &N);

	int* Dimensions = malloc (sizeof (int) * (N + 1));


	int **Path = malloc (sizeof (int*) * N);


	for (i = 0; i < N; i++)
		Path[i] = malloc (sizeof (int) * N);

	for (i = 0; i < N; i++)
	{
		Path[i][i] = 0;
	}
	printf ("Enter the dimensions : ");
	for (i = 0; i <= N; i++)
		scanf ("%d", &Dimensions[i]);

	int Cost = CalculatemMinCost(Dimensions, N, Path);

	printf ("Cost = %d\n", Cost);

	printf ("Parenthesization: ");
	Parenthesize(Path, 0, N - 1);

	return 0;
}
