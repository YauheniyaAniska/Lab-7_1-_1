#ifndef name_h
#define name_h

class Triangle{
	char xy[12] = "Треугольник";
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int temp;
	double a;
	double b;
	double c;
	double area;
	double perimeter;
public:
	Triangle(int n);
	void Triangle_show();
	void Triangle_area();
	void Triangle_perimeter();
};

#endif