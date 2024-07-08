#include <stdio.h>

long long calculate_numbers(int n) {
    long long dp[n + 1][2][3];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                dp[i][j][k] = 0;
            }
        }
    }

    dp[1][0][1] = 1;
    dp[1][1][1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i][0][1] = dp[i - 1][1][1] + dp[i - 1][1][2];
        dp[i][0][2] = dp[i - 1][0][1];

        dp[i][1][1] = dp[i - 1][0][1] + dp[i - 1][0][2];
        dp[i][1][2] = dp[i - 1][1][1];
    }

    long long total_count = dp[n][0][1] + dp[n][0][2] + dp[n][1][1] + dp[n][1][2];
    return total_count;
}

int main() {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);

    if (n > 30) {
        printf("The value of n should be at most 30.\n");
        return 1;
    }

    long long result = calculate_numbers(n);
    printf("The number of %d-digit numbers: %lld\n", n, result);

    return 0;
}
