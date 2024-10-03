#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int money;
	cout << "Введите сумму: ";
	cin >> money;
	cout << money << " - ";

	int copy = money;

	/////////////////////	1000	////////////////////////

	int thousand = copy / 1000;
	switch (thousand)
	{
	case 1: cout << "Одна "; break;
	case 2: cout << "Две "; break;
	case 3: cout << "Три "; break;
	case 4: cout << "Четыре "; break;
	case 5: cout << "Пять "; break;
	case 6: cout << "Шесть "; break;
	case 7: cout << "Семь "; break;
	case 8: cout << "Восемь "; break;
	case 9: cout << "Девять "; break;
	}

	if (thousand % 10 == 1)
	{
		cout << " тысяча ";
	}
	else if (thousand % 10 < 5)
	{
		cout << " тысячи ";
	}
	else if (thousand % 20 > 4 || thousand % 10 == 0)
	{
		cout << " тысяч ";
	}

	copy -= thousand * 1000;
	/////////////////////	 100	////////////////////////

	int hundred = copy / 100;
	switch (hundred)
	{
	case 1: cout << "Сто "; break;
	case 2: cout << "Двести "; break;
	case 3: cout << "Триста "; break;
	case 4: cout << "Четыреста "; break;
	case 5: cout << "Пятьсот "; break;
	case 6: cout << "Шестьсот "; break;
	case 7: cout << "Семьсот "; break;
	case 8: cout << "Восемьсот "; break;
	case 9: cout << "Девятьсот "; break;
	}
	copy -= hundred * 100;

	/////////////////////	  10	////////////////////////

	int ten = copy;
	if (ten < 20)
	{
		switch (ten)
		{
		case 1: cout << " Один "; break;
		case 2: cout << " Два "; break;
		case 3: cout << " Три "; break;
		case 4: cout << " Четыре "; break;
		case 5: cout << " Пять"; break;
		case 6: cout << " Шесть "; break;
		case 7: cout << " Семь "; break;
		case 8: cout << " Восемь "; break;
		case 9: cout << " Девять "; break;
		case 10: cout << " Десять "; break;
		case 11: cout << " Одиннадцать "; break;
		case 12: cout << " Двенадцать "; break;
		case 13: cout << " Тринадцать "; break;
		case 14: cout << " Четырнадцать "; break;
		case 15: cout << " Пятнадцать "; break;
		case 16: cout << " Шестнадцать "; break;
		case 17: cout << " Семьнадцать "; break;
		case 18: cout << " Восемьнадцать "; break;
		case 19: cout << " Девятнадцать "; break;

		}
	}
	else
	{
		int one = ten % 10;
		ten /= 10;
		switch (ten)
		{
			//case 1: cout << "Сто "; break;
		case 2: cout << "Двадцать "; break;
		case 3: cout << "Тридцать "; break;
		case 4: cout << "Сорок "; break;
		case 5: cout << "Пятьдесят "; break;
		case 6: cout << "Шестьдесят "; break;
		case 7: cout << "Семьдесят "; break;
		case 8: cout << "Восемьдесят "; break;
		case 9: cout << "Девяносто "; break;
		}
		switch (one)
		{
		case 1: cout << " Один "; break;
		case 2: cout << " Два "; break;
		case 3: cout << " Три "; break;
		case 4: cout << " Четыре "; break;
		case 5: cout << " Пять "; break;
		case 6: cout << " Шесть "; break;
		case 7: cout << " Семь "; break;
		case 8: cout << " Восемь "; break;
		case 9: cout << " Девять "; break;
		}

	}
	//copy -= ten * 10;
	//////////////////////////////////////////////////////

	if (money % 100 < 20 && money % 100 > 10 || money % 10 > 4 || money % 10 == 0)cout << " долларов";
	else if (money % 10 == 1) cout << " доллар ";
	else cout << " доллара ";

	/*if (money % 20 > 9 || money % 10 > 4 || money % 10 == 0)
	{
		cout << " долларов";
	}
	else if (money % 10 > 1)
	{
		cout << " доллара";
	}
	else if (money % 10 == 1)
	{
		cout << " доллар";
	}*/

	cout << endl;
	main();
}