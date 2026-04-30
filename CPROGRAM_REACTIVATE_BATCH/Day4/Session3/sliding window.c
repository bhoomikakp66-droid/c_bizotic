#include <stdio.h>

int main() {
    int N, K;

    scanf("%d %d", &N, &K);

    if (N <= 0 || K <= 0 || K > N) {
        printf("INVALID WINDOW");
        return 0;
    }

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: first window sum
    long sum = 0;
    for (int i = 0; i < K; i++) {
        sum += arr[i];
    }

    long maxSum = sum;
    int startIndex = 0;

    // Step 2: slide window
    for (int i = K; i < N; i++) {
        sum = sum - arr[i - K] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
            startIndex = i - K + 1;
        }
    }

    // Step 3: calculate average
    double avg = (double)maxSum / K;

    printf("MAX AVG %.2lf, START %d, END %d",
           avg, startIndex + 1, startIndex + K);

    return 0;
}