﻿ #include <iostream>

using namespace std;


int Sum(int a, int b);     //Прототип функции (обьявление функции- function defenition)
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);
long long int Factorial (int n);
double Power (int a, int n);

//#define CALC
//#define FACTORIAL
#define POWER

void main()
{
	system("CLS");
	setlocale(LC_ALL, "Russian");
#ifdef CALC
    int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;                 //Использование функции (Вызов функции- Function call)
	cout << a << "-" << b << "=" << Diff(a,b) << endl;
	cout << a << "*" << b << "=" << Prod(a,b)<< endl;
	cout << a << "/" << b << "=" << Quote(a,b) << endl;
#endif // CALC

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычесления факториала: "; cin >> n;
	cout << Factorial(n) << endl;
#endif //FACTORIAL 
#ifdef POWER
	int a; //основание степени
	int n; //показатель степени
	cout << "Введите основание стпепени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a,n) << endl;
	system("PAUSE");
	main();
#endif //POWER

}

	int Sum (int a, int b)
	{
		int c = a + b;
		return c;
	}
	int Diff (int a, int b)
	{
		return a - b;
	}
	int Prod (int a, int b)
	{
		//product= призводение
		return a * b;
	}
	double Quote(int a, int b)       
	{
		//quotıent частное
		return (double) a / b;
	}
	long long int Factorial (int n)
	{
		long long int f = 1;
		for (int i = 1; i <= n; i++)
		{
			f *= i;
		}
		return f;
	}
	double Power (int a, int n)                  
	{
		double N = 1;
		if (n < 0)
		{
			a = 1 / a;
			n = -n;
		}
		for (int i = 0; i<n; i++)
		{
			N *= a;
		}
		return N;
	}
