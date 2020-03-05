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
	cout << "конструктор по умолчанию\t" << a1 <<endl;
	cout << "конструктор инициализации\t" << a2 << endl;
	cout << "конструктор копирования         " << a3 << endl;
	cout << "конструктор преобразования типа\t" << a4 << endl;
	cout << "вывод с помощью функции         ";
	a2.out();
	cout << endl;
	b1 = a2 + a5;
	b2 = a5 - a3;
	b3 = a2 * a3;
	b4 = a5 / a3;

	cout << "Результат работы в несократимом виде оператора сложения дробей\t         " << b1 << endl;
	cout << "Результат работы в несократимом виде оператора вычитания дробей\t         " << b2 << endl;
	cout << "Результат работы в несократимом виде оператора произведения дробей\t " << b3 << endl;
	cout << "Результат работы в несократимом виде оператора деления дробей\t         " << b4 << endl;
	cout << "ввод собственной дроби: ";
	cin >> b5;






}