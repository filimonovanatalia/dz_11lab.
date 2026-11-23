# dz_11lab.
1. array_utils.h

```c
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

void input_massiv(int arr[], int n);
void print_massiv(int arr[], int n);
int calc_sum(int arr[], int n, int A);

#endif
```

2. array_utils.c

```c
#include <stdio.h>
#include "array_utils.h"

void input_massiv(int arr[], int n) {
    printf("Введите %d чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_massiv(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int calc_sum(int arr[], int n, int A) {
    int sum = 0;
    int start = -A;
    int end = -A / 2;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if ((x < start || x > end) && (x > A)) {
            sum = sum + x;
        }
    }
    return sum;
}
```

3. main.c

```c
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
```
