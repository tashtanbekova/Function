#include <iostream>

using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];

	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������  ���������  ��������� �����: "; cin >> maxRand;
		if (minRand == maxRand)cout << "������� �����������  �� ������ ���������:  " << endl;
	} while (minRand == maxRand);
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand = minRand);
	}
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}