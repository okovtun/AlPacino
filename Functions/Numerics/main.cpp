#include<iostream>
using namespace std;

void Oct(double number, const int base);
void ConvertInteger(double number, const int base);
void ConvertFractional(double number, const int base);

void main()
{
	setlocale(LC_ALL, "");
	double number = 200.256;
	//double number=17.375;
	//cout << "Введите дксятичное число: "; cin >> number;
	ConvertInteger(number, 2);
	ConvertFractional(number, 2);
}

void Oct(double number, const int base)
{
	int integer = number;
	double decimal = number - integer;
	const int n = 16;
	int otherInteger[n]{};
	int otherDecimal[n]{};
	int i = 0;
	for (; integer; integer /= base)	otherInteger[i++] = integer % base;
	for (--i; i >= 0; i--)cout << otherInteger[i]; cout << endl;
}
void ConvertInteger(double number, const int base)
{
	int integer = number;
	double decimal = number - integer;
	const int n = 16;
	int otherInteger[n]{};
	int otherDecimal[n]{};
	int i = 0;
	for (; integer; integer /= base)	otherInteger[i++] = integer % base;
	for (--i; i >= 0; i--)cout << otherInteger[i]; cout << ".";
}
void ConvertFractional(double number, const int base)
{
	int integer = number;
	double decimal = number - integer;
	const int n = 16;
	int otherDecimal[n]{};
	for (int i = 0; decimal && n - i; i++, decimal -= (int)decimal)
	{
		otherDecimal[i] = (decimal *= base);
		cout << otherDecimal[i];
		;
	}
	cout << endl;
}