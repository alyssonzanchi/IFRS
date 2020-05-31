#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Informe os valores de a, b, c");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    x1 = (-b + pow(delta, 0.5)) / (2 * a);
    x2 = (-b - pow(delta, 0.5)) / (2 * a);

    printf("Os valores sao %f e %f", x1, x2);
    return 0;
}