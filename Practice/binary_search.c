#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; 

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1; 
    }
    return -1; 
}

int main() {
    int n, target;    
    int arr[n];

    printf("Total Number in array: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("What you want to Search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result == -1)
        printf(" %d, Not Present.\n", target);
    else
        printf("%d, is present at index %d.\n", target, result);

    return 0;
}
