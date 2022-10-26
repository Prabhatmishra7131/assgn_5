#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the no. of times");
    scanf("%d", &n);
    printf("First n natural no.s in revrese order:");
    for (i = n-1; i >= 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}