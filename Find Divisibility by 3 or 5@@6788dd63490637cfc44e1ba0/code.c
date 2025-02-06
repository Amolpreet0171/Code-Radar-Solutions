#include <stdio.h>

int main() {
    in a;
    scanf("%d",&a);
    if(a%3==0 && a%==0){
        printf("Divisible by Both");
    }
    else if(a%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}