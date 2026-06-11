#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;

    float delta, x1, x2;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    delta = pow(b,2) - (4 * a *c);

    if(delta < 0){

        printf("Raizes inexistentes\n");

    } else {

        x1 = (float)(-b - sqrt(delta))/(2 * a);
        x2 = (float)(-b + sqrt(delta))/(2 * a);

        if (x1 < x2) {
            printf("x1 = %.2f\n", x2);
            printf("x2 = %.2f\n", x1);

        } else {
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);

        }
    }

    return 0;
}
