#include <stdio.h>
#include <math.h>

int main()
{
    double x, sum = 0.0, term = 1.0, sign = 1.0;
    int n = 1, fact = 1;
    
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    
    while(fabs(term) > 1e-6) 
    {
        sum += term; 
        n += 2; 
        fact *= n * (n-1); 
        sign = -sign; 
        term = sign * pow(x, n) / fact; 
    }
    
    printf("sin(%lf) = %lf", x, sum);
    
    return 0;
}
