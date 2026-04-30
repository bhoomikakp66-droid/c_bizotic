#include <stdio.h>
#include <stdlib.h>   // for qsort

// comparator for qsort
int comparator(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// function to find third max
int thirdMax(int nums[], int n) {

    // sort array (ascending)
    qsort(nums, n, sizeof(int), comparator);

    int count = 1;
    int last = nums[n-1];   // largest element

    // traverse from end (largest side)
    for(int i = n-2; i >= 0; i--) {

        if(nums[i] != last) {
            count++;
            last = nums[i];
        }

        if(count == 3) {
            return nums[i];
        }
    }

    // if third max doesn't exist → return max
    return nums[n-1];
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = thirdMax(nums, n);

    printf("%d", result);

    return 0;
}