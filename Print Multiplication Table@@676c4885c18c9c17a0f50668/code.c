// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for( int i=1; i<=10; i++){
        int table=N*i;
        printf("%d * %d = %d\n", N, i, table);
    }
    return 0;
}