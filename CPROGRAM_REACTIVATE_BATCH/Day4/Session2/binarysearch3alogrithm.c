#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int thirdMax(int nums[], int n) {

    // Sort array
    qsort(nums, n, sizeof(int), compare);

    // Store unique elements
    int unique[n];
    int k = 0;

    unique[k++] = nums[0];

    for(int i = 1; i < n; i++) {
        if(nums[i] != nums[i-1]) {   // FIXED
            unique[k++] = nums[i];
        }
    }

    // If less than 3 unique → return max
    if(k < 3) {
        return unique[k-1];
    }

    // Find 3rd maximum (k-3 index)
    int target = k - 3;

    int low = 0, high = k - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(mid == target) {
            return unique[mid];
        }
        else if(mid < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);   // FIXED
    }

    int result = thirdMax(nums, n);

    printf("Third Maximum: %d\n", result);

    return 0;
}