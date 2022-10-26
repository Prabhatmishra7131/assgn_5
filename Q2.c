#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the no. of times");
    scanf("%d", &n);
    printf("First N natural no.s:");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}