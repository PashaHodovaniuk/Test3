// Mykvurav.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
//����������� ������������� ����� ����������
#include "var51_lib.h"

using namespace std;

double a,b,c;
char M;//���������� ��� ����

void Digit(bool state, double &sid)
{
	double e=0;
	while (!state)
	{
		cin.clear();
		_flushall();
		printf("�� ������ ���� ��������� �������!\n");
		cin>>e;
		if(cin.good()){sid=e; state=true;}
	}
}

//������� ��� ����� ������� ����������
void Vvod ()
{
	bool ok;
	ok = true;
	while(ok)
	{
	system("cls");
	printf("������� ��������  'a': \n");
	cin>>a;
	Digit(cin.good(), a);
	printf("������� ��������  'b': \n");
	cin>>b;
	Digit(cin.good(), b);
	printf("������� ��������  'c': \n");
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
	printf("��������� ��� ���������� ����������� ���������\n");
	printf("���������� ������� ��. 525�� ��������� �.�.\n");
	printf("�������� ���� �� ������� ����:\n");
	printf("1. ������� ������� ���������.\n");
	printf("2. ���������� ���������� ������.\n");
	printf("3. ����� ����� ����������� ���������.\n");
	printf("4. �����.\n");
	printf("������� �������: ");
	M = _getche();
	switch(M)
	{
	case '1' : {Vvod();} break;
	case '2' : {
		if (a==NULL && b==NULL && c==NULL) 
		{system("cls"); printf("�� �� ����� ��� ���������\n"); system("pause"); break;}
		else
		{
			system("cls"); printf("���������� ������ � ���������: %i \n", kvurav::mykvurav::Col(a,b,c)); system("pause");
		}
			   } break;
	case '3' : {
		if (a==NULL && b==NULL && c==NULL) 
		{system("cls"); printf("�� �� ����� ��� ���������\n"); system("pause"); break;}
		else
		{
			system("cls"); kvurav::mykvurav::Rashet(a,b,c); system("pause");
		}
			   } break;
	case '4' : {system("cls"); printf("���������� ���������!\n"); system("pause");}break;
	default : {system("cls"); printf("�� ������� �� ������ ����� ����, ��������� �������!\n"); system("pause");} break;
	}		
	}
	while (M != '4');
	
	return 0;
}

