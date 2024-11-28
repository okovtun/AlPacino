#include<iostream>
using namespace std;

#define tab "\t"

const int ROWS = 7;
const int COLS = 7;

void main()
{
	setlocale(LC_ALL, "");
	int arr[ROWS][COLS]
	{
		{0, 1, 2, 3, 4, 5, 6},
		{0, 1, 2, 3, 4, 5, 6},
		{0, 1, 2, -1, 4, 5, 6},
		{0, 1, -2, 3, 4, 5, 6},
		{0, 1, 2, -3, 4, 5, 6},
		{0, 1, 2, 3, 4, 5, 6},
		{0, 1, 2, 2, 4, -5, 6},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << "\n-------------------------------\n";
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j >= i && j <= COLS - i - 1)
			{
				cout << arr[i][j] << tab;
				if (arr[i][j] < min)min = arr[i][j];
			}
			else
				cout << " " << tab;
		}
		cout << endl;
	}
	cout << "Min value:\t" << min << endl;
}