// Lab(7_1)_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//����� ������������. ������� 2 ������� ������. ���������  �������� � ������� ������� ������������.
//S�����. = sqrt(p * (p - a) * (p - b) * (p � c)), p = (a + b + c) / 2, ���  a, b, c - ������� ������������.

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