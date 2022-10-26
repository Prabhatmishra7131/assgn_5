#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the no. of times");
    scanf("%d", &n);
    for ( i = 1; i <= 2*n; i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}