#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        printf("*");
        printf(" ");
    }
    return 0;
}