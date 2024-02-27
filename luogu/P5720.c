#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    int i;
    for (i=1; a != 1;i++){
        a = a / 2;
    }
    printf("%d", i);
    return 0;
}