#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = arr;   // pointer points to first element

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr);   // no arr[i]
        ptr++;              // pointer increment
    }

    ptr = arr;   // reset pointer to start

    for (i = 0; i < n; i++) {
        sum += *ptr;        // dereference pointer
        ptr++;              // pointer increment
    }

    printf("Sum of elements = %d\n", sum);

    return 0;
}