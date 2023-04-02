#include <stdio.h> 
void test();
void positive();
void negative();

int main() {
    test();
}

void test() {
    int num;
    printf("Введите целое число: "); scanf("%d", &num);
    if(num > 0) {
        positive();
    }
    else if(num < 0) {
        negative();
    }
}

void positive() {
    printf("Положительное");
}

void negative() {
    printf("Отрицательное");
}