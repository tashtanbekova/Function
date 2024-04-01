#include <iostream>

using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);

int Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);
char Avg(const char arr[], const int n);

int minValue(const int arr[], const int n);
double minValue(const double arr[], const int n);
char minValue(const char arr[], const int n);

int maxValue(const int arr[], const int n);
double maxValue(const double arr[], const int n);
char maxValue(const char arr[], const int n);

int ShiftLeft(int arr[], const int n );
double ShiftLeft(double arr[], const int n );
char ShiftLeft(char arr[], const int n );

int ShiftRight(int arr[], const int n);
double ShiftRight (double arr[], const int n);
char ShiftRight (char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n];

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
	int number_of_shifts;
	cout << "Введите насколько элементов выдвинуть на лево: "; cin >> number_of_shifts;
	cout << "Введите насколько элементов выдвинуть на право : "; cin >> number_of_shifts;

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
void FillRand(char arr[], const int n, int minRand, int maxRand)
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

//Вывод массива на экран
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
void Print(const char arr[], const int n)
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
char Sum(const char arr[], const int n)
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
char Avg(const char arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}

int minValue(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
     }
	return min;
}
double minValue(const double arr[], const int n)
{
		double min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		return min;
}
char minValue(const char arr[], const int n)
{
		char min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		return min;
}

int maxValue(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < max)
			max = arr[i];
	}
	return max;
}
double maxValue(const double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < max)
			max = arr[i];
	}
	return max;
}
char maxValue(const char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < max)
			max = arr[i];
	}
	return max;
}

int ShiftLeft( int arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
double ShiftLeft(double arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
char ShiftLeft(char arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}

int ShiftRight(int arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-2; i>=n; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
double ShiftRight(double arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		char buffer = arr[n-1];
		for (int i = n-2; i>=n; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
char ShiftRight(char arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		char buffer = arr[n-1];
		for (int i = n-2; i>=n; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
