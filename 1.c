#include <stdio.h>
#include <locale.h>
int main()
{ 
	setlocale(LC_ALL, "RUS");
	int yeas;
	printf("Введите год:");
	scanf_s("%d", &yeas);
	if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0))
		printf("Год %d високосный\n", yeas);
	else
		printf("Год %d не високосный\n", yeas);
} 