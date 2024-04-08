#include <iostream>

using namespace std;

#define tab "\t"
constexpr auto delimiter = "\n----------------------------------------------\n";

const int ROWS = 3;
const int COLS = 4;
int i_arr_2[ROWS][COLS];
double d_arr_2[ROWS][COLS];
char ch_arr_2[ROWS][COLS];

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand=0 , int maxRand=100);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand=0, int maxRand=100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand=0, int maxRand=100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand=0, int maxRand=100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum (double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum (char arr[ROWS][COLS], const int ROWS, const int COLS);

int Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);
char Avg(const char arr[], const int n);

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg (double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValue(const int arr[], const int n);
double minValue(const double arr[], const int n);
char minValue(const char arr[], const int n);

int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValue(const int arr[], const int n);
double maxValue(const double arr[], const int n);
char maxValue(const char arr[], const int n);

int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n,const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
void ShiftLeft(char arr[], const int n, const int number_of_shifts);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS,int number_of_shifts);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS,int number_of_shifts);

 void ShiftRight(int arr[], const int n, const int number_of_shifts);
 void ShiftRight (double arr[], const int n, const int number_of_shifts);
 void ShiftRight (char arr[], const int n, const int number_of_shifts);

 void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
 void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
 void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

 //int Sort(int arr[], const int n);
 
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
	cout << "Введите насколько элементов выдвинуть налево :"; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);

	cout << "Введите насколько элементов выдвинуть на право : "; cin >> number_of_shifts;
	ShiftRight(arr, n,number_of_shifts);

	cout <<delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	FillRand(i_arr_2, ROWS, COLS);
	FillRand (d_arr_2, ROWS, COLS);
	FillRand (ch_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	Print (i_arr_2, ROWS, COLS);
	//Print (d_arr_2, ROWS, COLS);
	//Print (ch_arr_2, ROWS, COLS);

	cout << "Сумма элементов двухмерного массива: " << Sum(i_arr_2, ROWS, COLS);
	Sum(d_arr_2, ROWS, COLS);
	Sum(ch_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	cout << "Cреднее-арифметическое число в двухмерном массиве: " << Avg(i_arr_2, ROWS, COLS);
	Avg(d_arr_2, ROWS, COLS);
	Avg(ch_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	cout << "Минимальное значение в двухмерном массиве: " << minValue(i_arr_2, ROWS, COLS);
	minValue(d_arr_2, ROWS, COLS);
	minValue(ch_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	cout << "Максимальное значение в двухмерном массиве: " << maxValue(i_arr_2, ROWS, COLS);
	maxValue(d_arr_2, ROWS, COLS);
	maxValue(ch_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	cout << "Введите насколько элементов выдвинуть налево в двухмерном массиве:"; cin >> number_of_shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	ShiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	ShiftLeft(ch_arr_2, ROWS, COLS, number_of_shifts);

    cout << delimiter <<endl;

	cout << "Введите насколько элементов выдвинуть на право в двухмерном массиве : "; cin >> number_of_shifts;
	ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	ShiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	ShiftRight(ch_arr_2, ROWS, COLS, number_of_shifts);
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
		char buffer = minRand;
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

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	//Зполнение двухмерного массива случ числами

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand )
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
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

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout <<arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
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

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
	    }
    }
	return sum;
}
double Sum (double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
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

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(d_arr_2, ROWS, COLS) / (ROWS * COLS);
		}
     }
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(d_arr_2, ROWS, COLS) / (ROWS * COLS);
		}
	}
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(d_arr_2, ROWS, COLS) / (ROWS * COLS);
		}
	}
}


int minValue(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
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

int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
char minValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}


int maxValue(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double maxValue(const double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char maxValue(const char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i > number_of_shifts; i++)
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
	for (int i = 0; i > number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i > 0; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i-1] = arr[i];
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

void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}
void ShiftRight(double arr[], const int n, const int number_of_shifts)
{
	ShiftLeft ( arr, n, n - number_of_shifts);
}
void ShiftRight(char arr[], const int n, const int number_of_shifts)
{
	 ShiftLeft( arr, n, n - number_of_shifts);
}

void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}

//int Sort(int arr[], const int n)
