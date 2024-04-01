#include <iostream>

using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);

int Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);

int minValue(const int arr[], const int n);
double minValue(const double arr[], const int n);

int maxValue(const int arr[], const int n);
double maxValue(const double arr[], const int n);

int ShiftLeft(int arr[], const int n);
double ShiftLeft(double arr[], const int n);

int ShiftRight(int arr[], const int n);
double ShiftRight (double arr[], const int n);

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
	int number_of_shifts;
	//cout << "������� ��������� ��������� ��������� �� ����: "; cin >> number_of_shifts;

	const int m = 8;
	double d_arr[m];
	FillRand(d_arr, m);
	Print(d_arr, m);
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
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(const double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Avg(const int arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(const double arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}

int minValue(const int arr[], const int n)
{
	return arr[0];
}
double minValue(const double arr[], const int n)
{
	return arr[0];
}

int maxValue(const int arr[], const int n)
{
	return arr[4];
}
double maxValue(const double arr[], const int n)
{
	return arr[4];
}

int ShiftLeft(const int arr[], int n)
{

}

double ShiftLeft(const double arr[], int n)
{
	int number_of_shifts;

	return arr[n];	
}
int ShiftRight( int arr[], int n)
{

}
double ShiftRight(double arr[], int n)
{

}
