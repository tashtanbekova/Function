#include"maxValue.h"

int maxValue(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

double maxValue(const double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char maxValue(const char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}