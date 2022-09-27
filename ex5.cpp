// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// и сюдды добавлю немного воды, потому что проверю, загрузитсяли на нужную ветку

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void M(string *M, char H)
{
	if (H == '1')
	{
		M->substr(5, 13);
	}
}

int main()
{
	string N = "Семья решила поехать на рыбалку";
	while (true)
	{
		cout << "Выберите операцию:  1) substr, 2) insert, 3) find";
		char Q; cin >> Q;
		if (Q == '0') break;
		M(Q);
		cout << N;

	}
}