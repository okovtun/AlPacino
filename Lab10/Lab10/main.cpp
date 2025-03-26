#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	/*
	---------------------
	Задача 1:
	Преобразовать массив таким образом, чтобы сначала располагались все элементы,
	целая часть которых лежит в интервале [a, b], а потом — все остальные.
	---------------------
	*/
	const int n = 10;
	double arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
	cout << "Исходный массив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Преобразование массива:
	int a, b;
	cout << "Введите нижний предел: "; cin >> a;
	cout << "Введите верхний предел: "; cin >> b;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((int)arr[j] >= a && (int)arr[j] <= b)
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	cout << "Преобразованный массив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // TASK_1

#ifdef TASK_2

	/*
	----------------------
	Задача 2:
	Дана целочисленная квадратная матрица. Упорядочить по убыванию элементы во 2-й строке, 
	остальные - по возрастанию.
	----------------------
	*/
	const int ROWS = 5;
	const int COLS = 5;
	int arr[ROWS][COLS] = {};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	//Вывод исходного массива:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//Сортировка:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < COLS; k++)
			{
				//[i][j] выбирают элемент, в который нужно поместить минимальное значение
				//[k]	 перебирает элементы строки
				if (i == 2)continue;
				if (arr[i][k] < arr[i][j])
				{
					int buffer = arr[i][j];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
		}
	}
	for (int i = 0; i < COLS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			if (arr[2][j] > arr[2][i])
			{
				int buffer = arr[2][i];
				arr[2][i] = arr[2][j];
				arr[2][j] = buffer;
			}
		}
	}

	//Вывод отсортированного массива:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_2


}