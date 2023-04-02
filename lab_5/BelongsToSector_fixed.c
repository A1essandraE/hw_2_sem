#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
//#include <stdlib.h>	//Данная библиотека для многих функций Си нужна, но не здесь
//#include <locale.h> // Библиотека для указания локации (региональной кодировки) для Visual Studio

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);

void main() {
	//Тестировщик Вам сказал, что с вводными данными (-5,4) вывод не тот, что ожидаем. Исправьте это.
	double x = -5.;
	double y = 4.;
	printf("%d", bissectrice(x, y) || (vertical(x, y) && horizontal(x, y)));
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
