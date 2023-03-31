#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
//#include <stdlib.h>	//Данная библиотека для многих функций Си нужна, но не здесь
//#include <locale.h> // Библиотека для указания локации (региональной кодировки) для Visual Studio

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);

// Конструкция с void main работает только на Си. Си++ такое уже не примет.
// Дело в том, что при выполнении функции main() запускается новый Процесс (Process), к которой автоматически подколючается Runtime Library.
// return 0; - является кодом выхода из этого Process. Поэтому необходим int main(){return0;}
void main() {
	double x = -5.;
	double y = 4.;
	printf("%d", (vertical(x, y) && horizontal(x, y)) || (bissectrice(x, y)));
	return 0;
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
