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
	������ 1:
	������������� ������ ����� �������, ����� ������� ������������� ��� ��������,
	����� ����� ������� ����� � ��������� [a, b], � ����� � ��� ���������.
	---------------------
	*/
	const int n = 10;
	double arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
	cout << "�������� ������:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//�������������� �������:
	int a, b;
	cout << "������� ������ ������: "; cin >> a;
	cout << "������� ������� ������: "; cin >> b;
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

	cout << "��������������� ������:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // TASK_1

#ifdef TASK_2

	/*
	----------------------
	������ 2:
	���� ������������� ���������� �������. ����������� �� �������� �������� �� 2-� ������, 
	��������� - �� �����������.
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
	//����� ��������� �������:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//����������:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < COLS; k++)
			{
				//[i][j] �������� �������, � ������� ����� ��������� ����������� ��������
				//[k]	 ���������� �������� ������
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

	//����� ���������������� �������:
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