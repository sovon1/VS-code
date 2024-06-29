#include <stdio.h>

// Function to find all divisors of a number and apply the operation
void solve(int N, int *A, int len) {
    for (int l = 1; l <= N; ++l) {
        if (N % l == 0) { // l is a divisor of N
            for (int r = l; r <= N; ++r) {
                if (N % r == 0) { // r is a divisor of N
                    // Increase elements A[l-1] to A[r-1] by 1
                    for (int i = l - 1; i < r; ++i) {
                        A[i]++;
                    }
                }
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int N;
        scanf("%d", &N);
        
        int A[N];
        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }
        
        solve(N, A, N);
        
        for (int i = 0; i < N; ++i) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }
    
    return 0;
}
