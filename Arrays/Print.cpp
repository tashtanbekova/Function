#include"stdafx.h"
#include"Constants.h"
#include"Print.h"
//Вывод массива на экран
template<typename T>
void Print(const T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
