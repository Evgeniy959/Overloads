#include <iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 5;

void fillRand(int arr[], const int n);
void fillRand(double arr[], const int n);
void fillRand(char arr[], const int n);
void fillRand(int arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

void main()
{
	setlocale(LC_ALL, "RUS");
	const int n = 10;
	int arr[n];
	fillRand(arr, n);
	Print(arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	fillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	fillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	int i_arr_2[ROWS][COLS];
	fillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}
void fillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}

void fillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;

	}
}
void fillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void fillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
