#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=2*i-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}