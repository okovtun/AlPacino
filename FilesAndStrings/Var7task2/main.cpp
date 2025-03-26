#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const std::string digits = "0123456789";

std::string replace_digit(char str)
{
	int digit = str - 48;
	std::string word;
	switch (digit)
	{
	case 0:		word = "����";		break;
	case 1:		word = "����";		break;
	case 2:		word = "���";		break;
	case 3:		word = "���";		break;
	case 4:		word = "������";	break;
	case 5:		word = "����";		break;
	case 6:		word = "�����";		break;
	case 7:		word = "����";		break;
	case 8:		word = "������";	break;
	case 9:		word = "������";	break;
	}
	return word;
}
int find_digit(const std::string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))return i;
	}
	return -1;
}
char contain_digits(const std::string& str)
{
	for (int i = 0; i < str.length(); i++)
		//for (int j = 0; j < digits.length(); i++)
		//	if (str[i] == digits[j])return str[i];
		if (isdigit(str[i]))return str[i];
	return 0;
}

void main()
{
	setlocale(LC_ALL, "");
	std::ifstream fin("Text.txt");
	if (fin.is_open())
	{
		string buffer;
		while (!fin.eof())
		{
			std::getline(fin, buffer, '.');
			while (contain_digits(buffer))
			{
				int i = find_digit(buffer);
				buffer = buffer.replace(i, 1, replace_digit(buffer[i]));
			}
			cout << buffer + "." << endl;
			cout << endl;
		}
		fin.close();
	}
	else
	{
		cout << "��� ������ �����" << endl;
	}
}