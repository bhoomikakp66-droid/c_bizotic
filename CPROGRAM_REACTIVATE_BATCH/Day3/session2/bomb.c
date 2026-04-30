#include <stdio.h>

int main() {
    int n, k;

    printf("Enter N and K: ");
    scanf("%d %d", &n, &k);

    int code[n], result[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &code[i]);
    }


    if (k == 0) {
        for (int i = 0; i < n; i++) {
            result[i] = 0;
        }
    }

  
    else if (k > 0) {
        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = 1; j <= k; j++) {
                sum = sum + code[(i + j) % n];
            }

            result[i] = sum;
        }
    }


    else if (k < 0) {
        k = -k;

        int temp[2 * n];

       
        for (int i = 0; i < 2 * n; i++) {
            temp[i] = code[i % n];
        }

        /* Prefix Sum Array */
        int prefixSum[2 * n];
        prefixSum[0] = temp[0];

        for (int i = 1; i < 2 * n; i++) {
            prefixSum[i] = prefixSum[i - 1] + temp[i];
        }

        for (int i = 0; i < n; i++) {
            int left = i + n - k;
            int right = i + n - 1;

            if (left == 0) {
                result[i] = prefixSum[right];
            } else {
                result[i] = prefixSum[right] - prefixSum[left - 1];
            }
        }
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}