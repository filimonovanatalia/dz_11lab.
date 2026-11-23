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
