#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum[n];
    for (int i = 0; i < n; i++){
        sum[i] = 0;
    }
        for (int i = 0; i < n; i++)
        {
            for (int k = i; k != -1; k--)
            {
                if (a[k] < a[i])
                {
                    sum[i]++;
                }
            }
        }
    for (int i = 0; i < n;i++){
        printf("%d ", sum[i]);
    }
    return 0;
}