#include <stdio.h>
#include <math.h>

#define EPSILON 0.001 

double func(double x) {
    return x * x * x - x - 1;
}

void bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Invalid initial guesses.");
        return;
    }
    void bisection2 ( double c , double d )
    {
        if ( fucn(a)*func(b)>=0)
        {
        printf("invalid intial guess once agian : ");
        
        }
    }
    


    double c ;
    printf("     sl  |     a     |     b     |     x     |    f(x)   \n");
    printf("-----------------------------------------------------------\n");
    int iter = 1;
    while ((b - a) >= EPSILON) {
       
        c = (a + b) / 2;
         
           
        
        printf("    %3d    |  %.6lf  |  %.6lf  |  %.6lf  | %.6lf\n", iter, a, b, c, func(c));

        if (func(c) == 0.0) {
            break;
        }
        
        
        
        
        else if (func(c)*func(a)<0)
        {
            b = c;
        } else {
            a = c;
        }
        iter++;
    }

    printf("-----------------------------------------------------------\n");
    printf("The root is : %.6lf\n", c);
}

int main() {
    double a = 1, b = 2; // Initial guesses
    bisection(a, b);
    return 0;
}
