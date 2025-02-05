#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%lf %lf %lf", &x,&y,&z);
    printf("Average: %.2lf", ((x+y+z)/3));
    return 0;
}