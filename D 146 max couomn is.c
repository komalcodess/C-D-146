#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];


    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int j = 0; j < n; j++)
    {
        int max = matrix[0][j];

        for(int i = 1; i < m; i++)
        {
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }

        printf("Maximum of column %d: %d\n", j + 1, max);
    }

    return 0;
}
