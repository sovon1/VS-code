#include <stdio.h>
#include <math.h>

double function(double x) {
    return x*x*x - x -1;
}


int main() {
    double x, y;
    
    printf("x\tf(y)\n");
    for (x = 0.1; x <= 2.1; x += 0.1) {
        y = function(x); 

        printf("%.1f\t%.6f\n", x, y);
    }
    
    
    return 0;
}
