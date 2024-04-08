int ShiftLeft(int arr[], const int n)
{
	int shift;
	cout << "¬ведите насколько элементов выдвинуть на лево: "; cin >> shift;
	for (int i = 0; i > shift; i++)
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
	return 0;
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
	return 0;
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
	return 0;
}

int ShiftRight(int arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= n; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
double ShiftRight(double arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 2; i >= n; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
char ShiftRight(char arr[], const int n)
{
	for (int i = 0; i > 0; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 2; i >= n; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	return 0;
}