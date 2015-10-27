// Mykvurav.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
//Подключение заголовочного файла библеотеки
#include "var51_lib.h"

using namespace std;

double a,b,c;
char M;//переменная для меню

void Digit(bool state, double &sid)
{
	double e=0;
	while (!state)
	{
		cin.clear();
		_flushall();
		printf("Не варный ввод повторите попытку!\n");
		cin>>e;
		if(cin.good()){sid=e; state=true;}
	}
}

//Функция для ввода входных параметнов
void Vvod ()
{
	bool ok;
	ok = true;
	while(ok)
	{
	system("cls");
	printf("введите параметр  'a': \n");
	cin>>a;
	Digit(cin.good(), a);
	printf("введите параметр  'b': \n");
	cin>>b;
	Digit(cin.good(), b);
	printf("введите параметр  'c': \n");
	cin>>c;
	Digit(cin.good(), c);
	system("pause");
	break;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	do
	{
	system("cls");
	printf("Программа для нахождения квадратного уравнения\n");
	printf("Разработал студент гр. 525ст Годованюк П.А.\n");
	printf("Выберите один из пунктов меню:\n");
	printf("1. Введите входные параметры.\n");
	printf("2. Определить количество корней.\n");
	printf("3. Найти корни квадратного уравнения.\n");
	printf("4. Выход.\n");
	printf("Введите вариант: ");
	M = _getche();
	switch(M)
	{
	case '1' : {Vvod();} break;
	case '2' : {
		if (a==NULL && b==NULL && c==NULL) 
		{system("cls"); printf("Вы не ввели все параметры\n"); system("pause"); break;}
		else
		{
			system("cls"); printf("Количество корней в уравнении: %i \n", kvurav::mykvurav::Col(a,b,c)); system("pause");
		}
			   } break;
	case '3' : {
		if (a==NULL && b==NULL && c==NULL) 
		{system("cls"); printf("Вы не ввели все параметры\n"); system("pause"); break;}
		else
		{
			system("cls"); kvurav::mykvurav::Rashet(a,b,c); system("pause");
		}
			   } break;
	case '4' : {system("cls"); printf("Завершение программы!\n"); system("pause");}break;
	default : {system("cls"); printf("Вы выбрали не верный пункт меню, повторите попытку!\n"); system("pause");} break;
	}		
	}
	while (M != '4');
	
	return 0;
}

