#include <stdio.h>
int main() {
    int arr[10];
    int i, n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int max_end_here = arr[0];

    for (i = 1; i < n; i++) {
        max_end_here = (arr[i] > max_end_here + arr[i]) ? arr[i] : (max_end_here + arr[i]);
        max_so_far = (max_end_here > max_so_far) ? max_end_here : max_so_far;
    }

    printf("The sum of the largest contiguous subarray is %d\n", max_so_far);

    return 0;
}
