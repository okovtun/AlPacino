#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int money;
	cout << "������� �����: ";
	cin >> money;
	cout << money << " - ";

	int copy = money;

	/////////////////////	1000	////////////////////////

	int thousand = copy / 1000;
	switch (thousand)
	{
	case 1: cout << "���� "; break;
	case 2: cout << "��� "; break;
	case 3: cout << "��� "; break;
	case 4: cout << "������ "; break;
	case 5: cout << "���� "; break;
	case 6: cout << "����� "; break;
	case 7: cout << "���� "; break;
	case 8: cout << "������ "; break;
	case 9: cout << "������ "; break;
	}

	if (thousand % 10 == 1)
	{
		cout << " ������ ";
	}
	else if (thousand % 10 < 5)
	{
		cout << " ������ ";
	}
	else if (thousand % 20 > 4 || thousand % 10 == 0)
	{
		cout << " ����� ";
	}

	copy -= thousand * 1000;
	/////////////////////	 100	////////////////////////

	int hundred = copy / 100;
	switch (hundred)
	{
	case 1: cout << "��� "; break;
	case 2: cout << "������ "; break;
	case 3: cout << "������ "; break;
	case 4: cout << "��������� "; break;
	case 5: cout << "������� "; break;
	case 6: cout << "�������� "; break;
	case 7: cout << "������� "; break;
	case 8: cout << "��������� "; break;
	case 9: cout << "��������� "; break;
	}
	copy -= hundred * 100;

	/////////////////////	  10	////////////////////////

	int ten = copy;
	if (ten < 20)
	{
		switch (ten)
		{
		case 1: cout << " ���� "; break;
		case 2: cout << " ��� "; break;
		case 3: cout << " ��� "; break;
		case 4: cout << " ������ "; break;
		case 5: cout << " ����"; break;
		case 6: cout << " ����� "; break;
		case 7: cout << " ���� "; break;
		case 8: cout << " ������ "; break;
		case 9: cout << " ������ "; break;
		case 10: cout << " ������ "; break;
		case 11: cout << " ����������� "; break;
		case 12: cout << " ���������� "; break;
		case 13: cout << " ���������� "; break;
		case 14: cout << " ������������ "; break;
		case 15: cout << " ���������� "; break;
		case 16: cout << " ����������� "; break;
		case 17: cout << " ����������� "; break;
		case 18: cout << " ������������� "; break;
		case 19: cout << " ������������ "; break;

		}
	}
	else
	{
		int one = ten % 10;
		ten /= 10;
		switch (ten)
		{
			//case 1: cout << "��� "; break;
		case 2: cout << "�������� "; break;
		case 3: cout << "�������� "; break;
		case 4: cout << "����� "; break;
		case 5: cout << "��������� "; break;
		case 6: cout << "���������� "; break;
		case 7: cout << "��������� "; break;
		case 8: cout << "����������� "; break;
		case 9: cout << "��������� "; break;
		}
		switch (one)
		{
		case 1: cout << " ���� "; break;
		case 2: cout << " ��� "; break;
		case 3: cout << " ��� "; break;
		case 4: cout << " ������ "; break;
		case 5: cout << " ���� "; break;
		case 6: cout << " ����� "; break;
		case 7: cout << " ���� "; break;
		case 8: cout << " ������ "; break;
		case 9: cout << " ������ "; break;
		}

	}
	//copy -= ten * 10;
	//////////////////////////////////////////////////////

	if (money % 100 < 20 && money % 100 > 10 || money % 10 > 4 || money % 10 == 0)cout << " ��������";
	else if (money % 10 == 1) cout << " ������ ";
	else cout << " ������� ";

	/*if (money % 20 > 9 || money % 10 > 4 || money % 10 == 0)
	{
		cout << " ��������";
	}
	else if (money % 10 > 1)
	{
		cout << " �������";
	}
	else if (money % 10 == 1)
	{
		cout << " ������";
	}*/

	cout << endl;
	main();
}