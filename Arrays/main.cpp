#include <iostream>

using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
template<typename T>
void Print(const T arr[], const int n);
template<typename T>
T Sum(const T arr[], const int n);
template<typename T>
double Avg(const T arr[], const int n);
template<typename T>
T minValue(const T arr[], const int n);
template<typename T>
T maxValue(const T arr[], const int n);
template<typename T>
T ShiftLeft(const T arr[], const int n, const int  number_of_shifts);
template<typename T>
T ShiftRight(T arr[], const int n, const int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n];

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
	int number_of_shifts;
	cout << "������� ��������� ��������� �������� ������: ";cin>> number_of_shifts;
	ShiftLeft(d_arr, D_SIZE,number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "������� ��������� ��������� �������� ������: "; cin >> number_of_shifts;
	ShiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
}
	
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}

//����� ������� �� �����
template<typename T>
void Print(const T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template <typename T>
T Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
double Avg(const T arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}
template<typename T>
T minValue(const T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
T maxValue(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
T ShiftLeft(T arr[], const int n, const int  number_of_shifts)
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
template<typename T>
T ShiftRight(T arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts % n);
}