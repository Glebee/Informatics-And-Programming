#pragma once
#include <iostream>
#include <fstream>
#include "rotation.h"
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "russian");
	rotation a1;
	rotation a2(2, 4);
	rotation a3(a2);
	rotation a4(7);
	rotation a5(7, 2);
	rotation b1;
	rotation b2;
	rotation b3;
	rotation b4;
	rotation b5;
	cout << "����������� �� ���������\t" << a1 <<endl;
	cout << "����������� �������������\t" << a2 << endl;
	cout << "����������� �����������         " << a3 << endl;
	cout << "����������� �������������� ����\t" << a4 << endl;
	cout << "����� � ������� �������         ";
	a2.out();
	cout << endl;
	b1 = a2 + a5;
	b2 = a5 - a3;
	b3 = a2 * a3;
	b4 = a5 / a3;

	cout << "��������� ������ � ������������ ���� ��������� �������� ������\t         " << b1 << endl;
	cout << "��������� ������ � ������������ ���� ��������� ��������� ������\t         " << b2 << endl;
	cout << "��������� ������ � ������������ ���� ��������� ������������ ������\t " << b3 << endl;
	cout << "��������� ������ � ������������ ���� ��������� ������� ������\t         " << b4 << endl;
	cout << "���� ����������� �����: ";
	cin >> b5;






}