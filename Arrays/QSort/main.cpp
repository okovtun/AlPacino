#include<iostream>
using namespace std;

void main()
{
	setlocale(0, "rus");
	const int n = 8;
	int arr[n] = { 7, 2, 1, 8, 6, 3, 5, 4 };
	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}*/
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int p = n - 1;
	for (int i = -1, j = 0; j <= p; j++)
	{
		if (arr[j] < arr[p] || j == p)
		{
			int buffer = arr[++i];
			arr[i] = arr[j];
			arr[j] = buffer;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}