#include"Avg.h"
#include"Sum.h"
int Avg(const int arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(const double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
char Avg(const char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
}