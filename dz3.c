#include <stdio.h>
#include <locale.h>
#define year 2026
int main() {
    setlocale(LC_ALL, "RUS");
    int birth,age;            
    printf("Введите год рождения: ");
    scanf_s("%d", &birth);
    age = year - birth;
    if ((age % 10 == 1) && (age % 100 != 11)) {
        printf("Вам %d год\n", age);
    }
    else if ((age % 10 >= 2) && (age % 10 <= 4) && ((age % 100 < 10) || (age % 100 >= 20))) {
        printf("Вам %d года\n", age);
    }
    else {
        printf("Вам %d лет\n", age);
    }
    return 0;
}
