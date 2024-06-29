#include <stdio.h>
#include <math.h>

int is_odd_and_greater_than_one(long long n) {
    if (n % 2 != 0 && n > 1) {
        return 1;
    }
    return 0;
}

int has_odd_divisor(long long n) {
    if (is_odd_and_greater_than_one(n)) {
        return 1;
    }
    
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (has_odd_divisor(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
