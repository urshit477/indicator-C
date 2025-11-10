#include <stdio.h>

void findcubes(int *ptr, int size)
{
    printf("\ncubes of all element:\n");
    for (int i = 0; i < size * size; i++)
    {

        int cubes = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
        printf("%d", cubes);

        if ((i + 1) % size == 0)
            printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findcubes(&arr[0][0], size);

    return 0;
}