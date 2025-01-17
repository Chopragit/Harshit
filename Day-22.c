#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N); // Read the number to check
        if (is_prime(N)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}
