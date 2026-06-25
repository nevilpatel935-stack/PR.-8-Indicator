#include <stdio.h>

void cube(int *a, int r, int c)
{
    int i, j;

    for (i=0;i<r; i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ", (*(a + i * c + j)) * (*(a + i * c + j)) * (*(a + i * c + j)));
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter array elements:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cube of elements:\n");
    cube(&a[0][0], r, c);

    return 0;
}
