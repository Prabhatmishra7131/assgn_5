#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the no.");
    scanf("%d", &n);
    printf(" Table of N:");
    for (i = 1; i <= 10; i+=1)
    {
        printf("%d\n", i*n);
    }
    return 0;
}