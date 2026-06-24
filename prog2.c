#include <stdio.h>
void cubeArray(int *ptr, int n)
{
    int i, j;

    printf("\nCube Matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", ((ptr + i * n + j)) ;
                           ((ptr + i * n + j)) ;
                           ((ptr + i * n + j)));
        }
        printf("\n");
    }
}

int main()
{
    int n, i, j;
    int a[10][10];

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("\nEnter array elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeArray(&a[0][0], n);

    return 0;
}
