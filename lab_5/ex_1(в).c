#include <stdio.h>
#include <math.h>

int circle(double, double);
int vertical(double, double);
int horizontal(double, double);


void main() {
	double x = 1.;
	double y = 1.;
	if(((horizontal(x, y) && vertical(x, y)) && circle(x, y)) == 1) {
	    printf("Данная точка принадлежит закрашенной области");
	}
	else {
	    printf("Данная точка не принадлежит закрашенной области");
	}
}

int circle(double x, double y) {
    double a = pow((x - 5), 2);
    double b = pow((y - 5), 2);
	int res = -1;
	res = (a + b >= 25);
	return res;
}

int vertical(double x, double y) {
	int res = -1;
	res = ((0 <= x) && (x <= 5));
	return res;
}
int horizontal(double x, double y) {
	int res = -1;
	res = ((0 <= y) && (y <= 5));
	return res;
}