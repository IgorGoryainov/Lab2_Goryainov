#include <cmath>

float* exp_func(float x, float e)
{
	float vallues[4];
	float curr_val = 1;
	float absolut_val = 0;
	int N = 0;
	while (fabs(curr_val) > e)
	{
		absolut_val += curr_val;
		N++;
		curr_val = (curr_val * x * x) / (2 * N * ((2 * N) - 1));
	}
	vallues[0] = absolut_val;
	float correct_val = (exp(x) + exp(-1 * x)) / 2;
	vallues[1] = correct_val;
	vallues[2] = fabs(correct_val - absolut_val);
	vallues[3] = fabs((correct_val - absolut_val) / correct_val);
	return vallues;
}


double* exp_func(double x, double e)
{
	double vallues[4];
	double curr_val = 1;
	double absolut_val = 0;
	int N = 0;
	while (fabs(curr_val) > e)
	{
		absolut_val += curr_val;
		N++;
		curr_val = (curr_val * x * x) / (2 * N * ((2 * N) - 1));
	}
	vallues[0] = absolut_val;
	double correct_val = (exp(x) + exp(-1 * x)) / 2;
	vallues[1] = correct_val;
	vallues[2] = fabs(correct_val - absolut_val);
	vallues[3] = fabs((correct_val - absolut_val) / correct_val);
	return vallues;
}

long double* exp_func(long double x, long double e)
{
	long double vallues[4];
	long double curr_val = 1;
	long double absolut_val = 0;
	int N = 0;
	while (fabs(curr_val) > e)
	{
		absolut_val += curr_val;
		N++;
		curr_val = (curr_val * x * x) / (2 * N * ((2 * N) - 1));
	}
	vallues[0] = absolut_val;
	long double correct_val = (exp(x) + exp(-1 * x)) / 2;
	vallues[1] = correct_val;
	vallues[2] = fabs(correct_val - absolut_val);
	vallues[3] = fabs((correct_val - absolut_val) / correct_val);
	return vallues;
}
