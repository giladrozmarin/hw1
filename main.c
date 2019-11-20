#include <stdio.h>
#include "myMath.h"

int main()
{
    double input;
    printf("Please insert a real number to calculate this functions:\n"
           "1. e^x+x^3-2\n"
           "2. 3x+2x^2\n"
           "3. (4x^3)/5 -2x\n");
    scanf("%lf", &input);
double result = sub(add(Exp((int)input), Pow(input, 3)), 2);
printf("Results:\n");
printf("function 1: %.4f\n", result);
result = add(mul(input, 3), mul(Pow(input, 2), 2));
printf("function 2: %.4f\n", result);
result = sub(div(mul(Pow(input, 3), 4), 5), mul(input, 2));
printf("function 3: %.4f\n", result);
}
