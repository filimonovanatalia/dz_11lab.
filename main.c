#include <stdio.h>
#include "array_utils.h"

#define MAX 100

int main() {
    int arr[MAX];
    int n;
    int A;
    int ans;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Ошибка! Размер должен быть от 1 до 100.\n");
        return 1;
    }

    input_massiv(arr, n);

    printf("Ваш массив: ");
    print_massiv(arr, n);

    printf("Введите число A: ");
    scanf("%d", &A);

    ans = calc_sum(arr, n, A);
    printf("Ответ: %d\n", ans);

    return 0;
}
