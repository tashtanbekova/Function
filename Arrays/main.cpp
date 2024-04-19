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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "C������-�������������� ��������� �����: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValue(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValue(arr, n) << endl;
	int number_of_shifts;
	cout << "������� ��������� ��������� �������� �� ����: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "������� ��������� ��������� �������� �������: "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� ������� :" << Sum(d_arr, D_SIZE) << endl;
	cout << "C������-�������������� ��������� �����: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValue(d_arr, D_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValue(d_arr, D_SIZE) << endl;
	cout << "������� ��������� ��������� �������� ������: "; cin >> number_of_shifts;
	ShiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "������� ��������� ��������� �������� �������: "; cin >> number_of_shifts;
	ShiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
}

