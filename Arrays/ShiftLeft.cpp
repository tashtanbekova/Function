#include"ShiftLeft.h"
void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_shifts);
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_shifts);
	}
}
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_shifts);
	}
}