int circle(double, double);
int vertical(double, double);
int horizontal(double, double);
double a; double b;

int main() {
	double x = 0.;
	double y = 0.;
	if(horizontal(x, y) && vertical(x, y) && circle(x, y)) {
	    printf("1");
	}
	else {
	    printf("0");
	}
}

int circle(double x, double y) {
	int res = -1;
	a = pow((x - 5), 2);
	b = pow((y - 5), 2);
	res = (a + b >= 25);
	return res;
}

int vertical(double x, double y) {
	int res = -1;
	res = (0 <= x < 5);
	return res;
}
int horizontal(double x, double y) {
	int res = -1;
	res = (0 <= y < 5);
	return res;
}