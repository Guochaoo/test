#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int num=0;
    for (int k = n; k != 0; k--)
    {
        for (int i = 0; i < k; i++)
        {
            num++;
            printf("%02d",num);
        }
        printf("\n");
}
return 0;
}