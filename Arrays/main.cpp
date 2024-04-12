#include <iostream>

using namespace std;
using std::endl;
using std::cin;
using std::cout;

#define tab "\t"
constexpr auto delimiter = "\n----------------------------------------------\n";

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

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
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);
char Avg(const char arr[], const int n);

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
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

void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
void ShiftLeft(char arr[], const int n, const int number_of_shifts);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void ShiftRight(int arr[], const int n, const int number_of_shifts);
void ShiftRight(double arr[], const int n, const int number_of_shifts);
void ShiftRight(char arr[], const int n, const int number_of_shifts);

void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

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
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
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
			cout << arr[i][j] << tab;
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
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
	return (double)Sum(arr, n) / n;
}
char Avg(const char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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

void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}
void ShiftRight(double arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}
void ShiftRight(char arr[], const int n, const int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
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

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		//счетчик i выбирает элемент массива,
		//в который будет помещено мин значение из всех
	{
		for (int j = i + 1; j < n; j++)
			//счетчик j перебирает оставщиеся элементы массива
		{
			//arr[i] выбранный элемент
			//arr[j] перебираемый элемент
			if (arr[i] < arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}