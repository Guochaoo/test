#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n;i++){
        for (int k = 0; k < n;k++){
            scanf("%d", &a[i][k]);
        }
    }
}