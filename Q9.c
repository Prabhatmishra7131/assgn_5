#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the no. of times");
    scanf("%d", &n);
    printf("Cube of First N natural no.s:");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", i*i*i);
    }
    return 0;
}