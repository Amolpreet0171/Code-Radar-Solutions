#include <stdio.h>

int main() {
    in ta;
    scnaf("%d",&a);
    if((a>>(sizeof(a)*8-1))&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}