#include <iostream>
#include <windows.h>
using namespace std;

#define TASK_1
//#define TASK_2
#define TASK_3
#define TASK_4

#ifdef TASK_2
void Binary(unsigned A)
{
	int i, N;
	if (A > 255)N = 15;
	else		N = 7;
	for (i = N; i >= 0; i--)
	{
		cout << ((A >> i) & 1);
		if (i == 8)
			cout << " ";
	}
	cout << "\n\n";
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << "¬ведите дес€тичное число:\n";
	cin >> n;
	Binary(n);
	system("pause");
}
#endif // TASK_2

#ifdef TASK_3
unsigned long long int NC(unsigned long long int N, unsigned int b)
{
	unsigned long long int S, P;
	for (S = 0, P = 1; N != 0; S += N % b*P, P *= 10, N /= b);
	return S;
}
int main()
{
	unsigned long long int X;
	cout << " X = ";
	cin >> X; //¬вод числа X.
	//ѕеревод числа X в заданные системы счислени€.
	cout << X << " (10) = " << NC(X, 2) << " (2) " << endl;
	cout << X << " (10) = " << NC(X, 5) << " (5) " << endl;
	cout << X << " (10) = " << NC(X, 7) << " (7) " << endl;
	system("pause");
	return 0;
}

#endif // TASK_3
