#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	system("chcp 1251");
	string filename = "File.txt";
	ifstream fin(filename);
	if (fin.is_open())
	{
		string buffer;
		for (int i = 0; !fin.eof(); i++)
		{
			std::getline(fin, buffer);
			if (i % 2 == 0)
			{
				if (buffer.length() == 0)continue;
				int spaces = std::count_if(buffer.begin(), buffer.end(), [](unsigned char c) {return std::isspace(c); });
				cout << "Строка №" << i << " содержит " << spaces << " пробелов" << endl;
				cout << buffer << endl;
				cout << "\n----------------------------------\n";
			}
		}
		fin.close();
	}
	else
	{
		cout << "Error:Файл не найден" << endl;
	}
}