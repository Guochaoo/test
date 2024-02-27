#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    double sumA=0, sumB=0;
    double numA=0, numB=0;
    for (int i = 1; i <= n;i++){
        if(i%k==0){
            sumA += i;
            numA += 1;
        }else{
            sumB += i;
            numB += 1;
        }
        }
        double revA, revB;
        revA = sumA / numA;
        revB = sumB / numB;
        printf("%.1lf %.1lf", revA, revB);
    }
