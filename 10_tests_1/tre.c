#include <stdio.h>

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);

void main() {
    // проверяем, принадлежит ли точка закрашенной области при условии:
    // 1) находится на прямой биссектрисы
    // 2) также находится на прямой х = 4
	double x = 4.;
	double y = -4.;
	printf("%d", (horizontal(x, y) && vertical(x, y)) || bissectrice(x, y));
	//return 0;
}

int bissectrice(double x, double y) {
	int res = -1;
	res = ((y <= -x) && (x < 4) && (y < 3));
	return res;
}

int vertical(double x, double y) {
	int res = -1;
	res = (x > 4);
	return res;
}
int horizontal(double x, double y) {
	int res = -1;
	res = (y > 3);
	return res;
}