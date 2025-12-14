#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y, z;
	puts("Введите переменную x");
	scanf("%f", &x);
	puts("Введите переменную y");
	scanf("%f", &y);
	puts("Введите переменную z");
	scanf("%f", &z);

	double w;
	double res1, res2, res3;
	res1 = pow((pow(x, 6) + pow(log(y), 2)), 1.0/3.0);
	res2 = exp(fabs(x - y)) * pow(fabs(x - y), x + y);
	res3 = atan(x) + atan(z);
	w = res1 + res2 / res3;
	puts("Дано:");
	puts("---------------------------------");
	printf("x = %f\ny = %f\nz = %f\n", x, y, z);
	puts("Вычисление кубического корня:");
	printf("(%f ^ 6 + (ln %f) ^ 2) ^ 1/3\n", x, y);
	puts("Вычисление числителя:");
	printf("e ^ |%f - %f| * |%f - %f| ^ (%f + %f)\n", x, y, x, y, x, y);
	puts("Вычисление знаменателя:");
	printf("arctan(%f) + arctan(%f)\n", x, z);
	puts("Вычисление результата:");
	printf("%f + %f / %f\n", res1, res2, res3);
	puts("---------------------------------");
	printf("Результат: %.3f", w);
	return 0;
}
