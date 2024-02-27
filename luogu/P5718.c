#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
/*     for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    } */
    int min = a[0];
    for (int i = 0; i < n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("%d", min);
    return 0;
}