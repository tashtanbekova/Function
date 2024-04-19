#include <iostream>
#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"FillRand.cpp"
#include"Print.h"
#include"Print.cpp"
#include"Statistics.h"
#include"Statistics.cpp"

void main()
{
	setlocale(LC_ALL, "Russian");
	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимальное возможное случайное число: "; cin >> minRand;
		cout << "Введите максимальное  возможное  случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Предела диапозоныне  не должны совпадать:  " << endl;
	} while (minRand == maxRand);*/

	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Cреднее-арифметическое элементов числа: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValue(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(arr, n) << endl;
	//int number_of_shifts;
	//cout << "Введите насколько элементов выдвинуть на лево: "; cin >> number_of_shifts;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива :" << Sum(d_arr, D_SIZE) << endl;
	cout << "Cреднее-арифметическое элементов числа: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValue(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(d_arr, D_SIZE) << endl;
}

