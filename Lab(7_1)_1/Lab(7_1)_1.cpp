// Lab(7_1)_1.cpp: определяет точку входа для консольного приложения.
//Класс «Треугольник». Создать 2 объекта класса. Вычислить  периметр и площадь каждого треугольника.
//Sтреуг. = sqrt(p * (p - a) * (p - b) * (p – c)), p = (a + b + c) / 2, где  a, b, c - стороны треугольника.

#include "stdafx.h"
#include <iostream>
#include "name.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Triangle ob1(1), ob2(2);
	ob1.Triangle_perimeter();
	ob1.Triangle_area();
	ob2.Triangle_perimeter();
	ob2.Triangle_area();
	ob1.Triangle_show();
	ob2.Triangle_show();
	system("pause");
	return 0;
}