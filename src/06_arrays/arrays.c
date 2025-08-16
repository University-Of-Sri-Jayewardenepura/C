#include <stdio.h>

void print_array(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum_array(const int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    print_array(a, 5);

    int total = sum_array(a, 5);
    printf("sum = %d\n", total);

    int matrix[2][3] = {{1,2,3},{4,5,6}};
    printf("matrix[1][2] = %d\n", matrix[1][2]);

    return 0;
}
