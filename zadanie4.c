#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int task1() {
	printf("\n--- Задача 1 ---\n");
	char c;
	puts("Введите строку");
	scanf("%c", &c);
	int i;
	puts("Введите число");
	scanf("%d", &i);;
	float f;
	puts("Введите число");
	scanf("%f", &f);
	double d;
	puts("Введите число");
	scanf("%lf", &d);
	printf("%c \n", c);
	printf("%i \n", i);
	printf("%f \n", f);
	printf("%f\n", d);
}
int task1a() {
	printf("\n--- Задача 1а ---\n");
	float num;
	printf("Введите вещественное число: ");
	scanf("%f", &num);
	int cel = (int)num;
	float drob = num - cel;
	printf("Целая часть: %d\n", cel);
	printf("Дробная часть: %f\n", drob);
}
int task1b() {
	int pip;
	printf("\n--- Задача 1б ---\n");
	printf("Введите число:\n ");
	scanf("%d", &pip);
	printf("Десятичный код: %d\n", pip);
	printf("Шестнадцатеричный код: %x\n", pip);
}
int task1B() {
	float chel;
	printf("\n--- Задача 1в ---\n");
	printf("Введите число:\n ");
	scanf("%.2f", &chel);
	float res = 1 / chel;
	printf("1/%.2f=%.2f", chel, res);
}
int task2() {
	printf("\n--- Задача 2 ---\n");
	int a = 11;
	int b = 3;
	int x;
	float res1 = (float)a / b;
	float res2 = (float)a / b;
	printf("res1 = %f\n", res1);
	printf("res2 = %f\n", res2);

}
task3() {
	printf("\n--- Задача 3 ---\n");
	printf("Введите трехзначное число ");
	int f;
	scanf("%d", &f);
	int res1, res2, res3;
	res1 = f % 10;
	res2 = (f / 10) % 10;
	res3 = f / 100;
	printf("Сумма цифр числа: %d\n", res1 + res2 + res3);
	printf("первая цифра %d вторая цифра %d третья цифра %d\n", res3, res2, res1);
}
int main() {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task1a();
	task1b();
	task1B();
	task3();
	return 0;
}
