#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    int A, B;
    printf("Введите номер рабочего места Анны: ");
    scanf("%d", &A);

    printf("Введите номер рабочего места Бориса: ");
    scanf("%d", &B);

    if (A % 2 == 0 && B % 2 != 0) {
        printf("Пьём кофе!\n");
    }
    else if (A % 2 != 0 && B % 2 == 0) {
        printf("Пьём кофе!\n");
    }
    else {
        printf("Не пьём кофе :((\n");
    }

    return 0;
}