#include"Sort.h"

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		//������� i �������� ������� �������,
		//� ������� ����� �������� ��� �������� �� ����
	{
		for (int j = i + 1; j < n; j++)
			//������� j ���������� ���������� �������� �������
		{
			//arr[i] ��������� �������
			//arr[j] ������������ �������
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
	int iterations = 0;
	int exchanges = 0;
	//��� ��� ����� �������� �������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*
			for (int k = j + 1; k < COLS; k++)
			{
				//arr[i][j]=��������� �������
				//arr[i][k]=������������ �������
				iterations++;
				if (arr[i][k] < arr[i][j])
				{
					int buffer = arr[i][j];
					arr[i][k] = buffer;
					arr[i][k] = buffer;
					exchanges++;
				}
			}*/
			//��� ��� ���������� ���������� �������� � ������ ������������ �������� 
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					for (l = k == i ? j + 1 : 0; l < COLS; l++)
					{
						//if (k == i && l == 0)l = j + 1;
						//if (l == COLS)break;
						//arr[i][j]=��������� �������
						//arr[k][l]=����������� �������
						iterations++;
						if (arr[i][j] > arr[k][l])
						{
							int buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
							exchanges++;
						}
					}
				}
			}
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������.\n";
	cout << "��� ���� ���� ��������� " << exchanges << " ������� ���������.\n";
}