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
		cout << "������� ����������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������  ���������  ��������� �����: "; cin >> maxRand;
		if (minRand == maxRand)cout << "������� �����������  �� ������ ���������:  " << endl;
	} while (minRand == maxRand);*/

	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "C������-�������������� ��������� �����: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValue(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValue(arr, n) << endl;
	//int number_of_shifts;
	//cout << "������� ��������� ��������� ��������� �� ����: "; cin >> number_of_shifts;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� ������� :" << Sum(d_arr, D_SIZE) << endl;
	cout << "C������-�������������� ��������� �����: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValue(d_arr, D_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValue(d_arr, D_SIZE) << endl;
}

