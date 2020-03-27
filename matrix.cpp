int** get_matric(int m, int n, int k, int** matric1, int** matric2)
{
	int** matric3 = new int* [m];
	for (int i = 0; i < m; i++)
		matric3[i] = new int[k];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			int sums = 0;
			for (int p = 0; p < n; p++)
				sums += matric1[i][p] * matric2[p][j];
			matric3[i][j] = sums;
		}
	}
	return matric3;
}

long int** get_matric(int m, int n, int k, long int** matric1, long int** matric2)
{
	long int** matric3 = new long int* [m];
	for (int i = 0; i < m; i++)
		matric3[i] = new long int[k];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			long int sums = 0;
			for (int p = 0; p < n; p++)
				sums += matric1[i][p] * matric2[p][j];
			matric3[i][j] = sums;
		}
	}
	return matric3;
}

float** get_matric(int m, int n, int k, float** matric1, float** matric2)
{
	float** matric3 = new float* [m];
	for (int i = 0; i < m; i++)
		matric3[i] = new float[k];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			float sums = 0;
			for (int p = 0; p < n; p++)
				sums += matric1[i][p] * matric2[p][j];
			matric3[i][j] = sums;
		}
	}
	return matric3;
}

double** get_matric(int m, int n, int k, double** matric1, double** matric2)
{
	double** matric3 = new double* [m];
	for (int i = 0; i < m; i++)
		matric3[i] = new double[k];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			double sums = 0;
			for (int p = 0; p < n; p++)
				sums += matric1[i][p] * matric2[p][j];
			matric3[i][j] = sums;
		}
	}
	return matric3;
}

long double** get_matric(int m, int n, int k, long double** matric1, long double** matric2)
{
	long double** matric3 = new long double* [m];
	for (int i = 0; i < m; i++)
		matric3[i] = new long double[k];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			long double sums = 0;
			for (int p = 0; p < n; p++)
				sums += matric1[i][p] * matric2[p][j];
			matric3[i][j] = sums;
		}
	}
	return matric3;
}