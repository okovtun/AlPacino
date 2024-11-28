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
			for (int i = 0; i < buffer.length(); i++)
			{
				if (buffer[i] == ' ' && islower(buffer[i + 1]))
					buffer[i + 1] = toupper(buffer[i + 1]);
			}
			cout << buffer << endl;
		}
		fin.close();
	}
	else
	{
		cout << "Error:Файл не найден" << endl;
	}
}