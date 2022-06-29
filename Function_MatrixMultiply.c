#include<stdio.h>

void ReadMatrix();
void DisplayMatrix();
void Multiply();
void main()
{
    int mat1[10][10], mat2[10][10], mul[10][10];
    int m, n, p;

    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d %d",&m, &n);
    ReadMatrix(mat1, m, n);

    printf("Enter the number of columns for 2nd matrix\n");
    scanf("%d", &p);
    ReadMatrix(mat2, n, p);

    printf("First Matrix:\n");
    DisplayMatrix(mat1, m, n);

    printf("Second Matrix:\n");
    DisplayMatrix(mat2, n, p);

    Multiply(mat1, mat2, mul, m, n, p);

    printf("The resultant matrix formed on multiplying the two matrices:\n");
    DisplayMatrix(mul, m, p);
}

void ReadMatrix(int mat1[10][10], int m, int n)
{
  int i, j;
  printf("Enter the elements of the matrix\n");
  for(i = 0;i < m;i++)
  {
      for(j = 0;j < n;j++)
      {
          scanf("%d", &mat1[i][j]);
      }
  }
}

void DisplayMatrix(int mul[10][10], int m, int p)
{
  int i, j;
  for(i = 0;i < m;i++)
  {
      for(j = 0;j < p;j++)
      {
          printf("%d\t", mul[i][j]);
      }
      printf("\n");
  }
}

void Multiply(int mat1[10][10], int mat2[10][10], int mul[10][10], int m, int n, int p)
{
    int i, j, k;
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < p;j++)
        {
            mul[i][j] = 0;
            for(k = 0;k < n;k++)
            {
                mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
}
