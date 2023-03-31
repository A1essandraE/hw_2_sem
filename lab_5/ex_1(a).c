#include <stdio.h>

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);

int main() {
	double x; double y;
	printf("Enter x variable: ");
	scanf("%lf", &x);
	printf("Enter y variable: ");
	scanf("%lf", &y);
	printf("%d", (horizontal(x, y) || vertical(x, y)) && bissectrice(x, y));
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