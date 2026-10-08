#include <stdio.h>
#include <locale.h>
int main()
{

	setlocale(LC_ALL, "RUS");
	double x, F;
	printf("Введите x:");
	scanf_s("%lf", &x);
	F = (x <= 1) ? 0.0 : 1.0 / (x + 6);
	printf("F(x) = %f\n", (x <= 1) ? 0.0 : 1.0 / (x + 6));
	return 0;
}