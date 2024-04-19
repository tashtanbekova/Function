#include <iostream>
#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"Statistics.h"
#include"Statistics.cpp"
#include"Shifts.h"
#include"Shifts.cpp"

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n=5;
	int arr[n];

	FillRand(arr,n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Cреднее-арифметическое элементов числа: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValue(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(arr, n) << endl;
	int number_of_shifts;
	cout << "Введите насколько элементов сдвинуть на лево: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите насколько элементов сдвинуть направо: "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива :" << Sum(d_arr, D_SIZE) << endl;
	cout << "Cреднее-арифметическое элементов числа: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValue(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(d_arr, D_SIZE) << endl;
	cout << "Введите насколько элементов сдвинуть налево: "; cin >> number_of_shifts;
	ShiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите насколько элементов сдвинуть направо: "; cin >> number_of_shifts;
	ShiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
}

