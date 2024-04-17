#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"Avg.h"
#include"minValue.h"
#include"maxValue.h"
#include"ShiftLeft.h"
#include"ShifRight.h"
#include"Sort.h"
#include"Unique.h"

void main()
{

	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n];

	/*int minrand, maxrand;
	do
	{
		cout << "введите минимальное возможное случайное число: "; cin >> minrand;
		cout << "введите максимальное  возможное  случайное число: "; cin >> maxrand;
		if (minrand == maxrand)cout << "предела диапозоныне  не должны совпадать:  " << endl;
	} while (minrand == maxrand);
	*/
	FillRand(arr, n);
	Print(arr, n);
	cout << "сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "cреднее-арифметическое элементов числа: " << Avg(arr, n) << endl;
	cout << "минимальное значение в массиве: " << minValue(arr, n) << endl;
	cout << "максимальное значение в массиве: " << maxValue(arr, n) << endl;

	int number_of_shifts;
	cout << "введите насколько элементов выдвинуть налево :"; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	cout << "введите насколько элементов выдвинуть на право : "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	cout << delimiter << endl;

	const int d_sıze = 8;
	double d_arr[d_sıze];
	FillRand(d_arr, d_sıze);
	Print(d_arr, d_sıze);
	cout << "сумма элементов массива: " << Sum(d_arr, d_sıze) << endl;
	cout << "cреднее-арифметическое элементов числа: " << Avg(d_arr, d_sıze) << endl;
	cout << "минимальное значение в массиве: " << minValue(d_arr, d_sıze) << endl;
	cout << "максимальное значение в массиве: " << maxValue(d_arr, d_sıze) << endl;
	cout << "введите насколько элементов сдвинуть налево : "; cin >> number_of_shifts;
	ShiftLeft(d_arr, d_sıze, number_of_shifts);
	Print(d_arr, d_sıze);

	cout << "введите насколько элементов сдвинуть направо: "; cin >> number_of_shifts;
	ShiftRight(d_arr, d_sıze, number_of_shifts);
	Print(d_arr, d_sıze);

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "сумма элементов двухмерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "cреднее-арифметическое число в двухмерном массиве: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "минимальное значение в двухмерном массиве: " << minValue(i_arr_2, ROWS, COLS) << endl;
	cout << "максимальное значение в двухмерном массиве: " << maxValue(i_arr_2, ROWS, COLS) << endl;
	cout << "введите насколько элементов сдвинуть налево : "; cin >> number_of_shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);


	cout << "введите насколько элементов сдвинуть направо: "; cin >> number_of_shifts;
	ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);

	cout << "сумма элементов двухмерного массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "cреднее-арифметическое число в двухмерном массиве: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "минимальное значение в двухмерном массиве: " << minValue(d_arr_2, ROWS, COLS) << endl;
	cout << "максимальное значение в двухмерном массиве: " << maxValue(d_arr_2, ROWS, COLS) << endl;
	cout << "введите насколько элементов сдвинуть налево : "; cin >> number_of_shifts;
	ShiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);

	cout << "введите насколько элементов сдвинуть направо: "; cin >> number_of_shifts;
	ShiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	char ch_arr_2[ROWS][COLS];
	FillRand(ch_arr_2, ROWS, COLS);
	Print(ch_arr_2, ROWS, COLS);
	cout << "Сумма элементов двухмерного массива: " << Sum(ch_arr_2, ROWS, COLS) << endl;;
	cout << "Cреднее-арифметическое число в двухмерном массиве: " << Avg(ch_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в двухмерном массиве: " << minValue(ch_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в двухмерном массиве: " << maxValue(ch_arr_2, ROWS, COLS) << endl;

	cout << "Введите насколько элементов сдвинуть налево: "; cin >> number_of_shifts;
	ShiftLeft(ch_arr_2, ROWS, COLS, number_of_shifts);
	Print(ch_arr_2, ROWS, COLS);

	cout << "Введите насколько элементов сдвинуть направо: "; cin >> number_of_shifts;
	ShiftRight(ch_arr_2, ROWS, COLS, number_of_shifts);
	Print(ch_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	Sort(arr, n);
	Print(arr, n);
	cout << delimiter << endl;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout <<"сумма элементов массива " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValue(arr, n) << endl;
	cout << "Максимальное значение: " << maxValue(arr, n) << endl;
}