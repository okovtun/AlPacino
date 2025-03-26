#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------\n"

int*** Allocate(const int pages, const int rows, const int cons);
void Clear(int*** arr, const int pages, const int rows);

void FillRand(int*** arr, const int pages, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void Print(int*** arr, const int pages, const int rows, const int cols);

int SumEvenNegative(int*** arr, const int pages, const int rows, const int cols);

void main()
{
	setlocale(LC_ALL, "");
	int pages = 3;
	int rows = 4;
	int cols = 5;
	int*** arr = Allocate(pages, rows, cols);
	FillRand(arr, pages, rows, cols, -50, +50);
	Print(arr, pages, rows, cols);
	cout << "Сумма отрицательных элементов четных строк: " << SumEvenNegative(arr, pages, rows, cols) << endl;;
	Clear(arr, pages, rows);
}

int*** Allocate(const int pages, const int rows, const int cols)
{
	int*** arr = new int**[pages];
	for (int i = 0; i < pages; i++)
	{
		arr[i] = new int*[rows] {};
		for (int j = 0; j < rows; j++)
		{
			arr[i][j] = new int[cols] {};
		}
	}
	return arr;
}
void Clear(int*** arr, const int pages, const int rows)
{
	for (int i = 0; i < pages; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			delete[] arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
}

void FillRand(int*** arr, const int pages, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < pages; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				arr[i][j][k] = rand() % (maxRand - minRand) + minRand;
			}
		}
	}
}
void Print(int*** arr, const int pages, const int rows, const int cols)
{
	cout << delimiter;
	for (int i = 0; i < pages; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				cout << arr[i][j][k] << tab;
			}
			cout << endl;
		}
		cout << delimiter;
	}
}
int SumEvenNegative(int*** arr, const int pages, const int rows, const int cols)
{
	int sum = 0;
	for (int i = 0; i < pages; i++)
	{
		for (int j = 0; j < rows; j+=2)
		{
			for (int k = 0; k < cols; k++)
			{
				if (arr[i][j][k] < 0)sum += arr[i][j][k];
			}
		}
	}
	return sum;
}