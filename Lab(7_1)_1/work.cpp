#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "name.h"

using namespace std; 

Triangle::Triangle(int n){
	cout << "����������� " << n << ": " << endl;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
}
;
void Triangle::Triangle_show(){
	cout << "����� �����������.\n";
	_getch();
	cout << "�����������: " << "(" << x1 << "," << y1 << "), (" << x2 << "," << y2 << "), (" << x3 << "," << y3 << ")" << endl;
	cout << "��������: " << perimeter << endl;
	cout << "�������: " << area << endl;
};
void Triangle::Triangle_area(){
	double p = perimeter / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
};
void Triangle::Triangle_perimeter(){
	perimeter = a + b + c;
};