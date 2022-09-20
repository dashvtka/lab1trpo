#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <Windows.h>
using namespace std;

string readFileToString(string s)
{
	ifstream f(s); // класс читает
	string ss; // переменная в которую буем записывать фал
	while (f)
	{
		string tmp; // записала строку которую он читает 
		getline(f, tmp);// читаем текующую строку и записываем ее в tmp
		ss += tmp + "\n";// записываем строку прочитали и прекрепляем к tmp , после вернет все строки которые мы прочитали
	}
	return ss;
}

string function(string s, string s1) // s1-слово которое мы ищем
{
	string tmp = "";

	while (s.find(s1) != string::npos)// пока такие слова есть 
	{
		int n = s.find(s1);
		s.erase(s.begin(), s.begin() + n + s1.length() + 1);
		tmp += s.substr(0, s.find(' ')) + "\n";
	} 
	return tmp;
}
int main()
{   SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	string s;
	cout <<  "Введите имя файла: " << endl;
	cin >> s ;
	string ss = readFileToString(s);
	cout << "Введите слово: " << endl;
	cin >> s;
	cout << function(ss, s);

}
