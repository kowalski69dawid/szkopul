#define M_PI 3.14159265358979323846
#include <stdio.h>
long double r,p,l;
int main() {
    scanf("%Lf", &r);
    p = M_PI * r * r;
    l = 2 * M_PI * r;
    printf("%.3Lf\n", p);
    printf("%.3Lf", l);
}
