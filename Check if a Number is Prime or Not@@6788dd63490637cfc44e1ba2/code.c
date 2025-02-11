// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%2!=0){
        printf("Prime");
    }
    else if(num<=1){
        printf("Not Prime");
    }
    else if(num==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
