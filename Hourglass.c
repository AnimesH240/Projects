#include<stdio.h>

void detect()
{
	int a[6][6] = {{1, 1, 1, 0, 0, 0},
			   	       {0, 1, 0, 0, 0, 0},
				         {1, 1, 1, 0, 0, 0},
				         {0, 0, 2, 4, 4, 0},
				         {0, 0, 0, 2, 0, 0},
				         {0, 0, 1, 2, 4, 0}};
	int r = 6;
	int c = 6;
	int i, j;
	int co = 0;

	for (i = 0; i < 3; i++)
  {
		for (j = 0; j < 3; j++)
    {
			if (a[i][j] + a[i][j+1] + a[i][j+2] > 0 && a[i+2][j] + a[i+2][j+1] + a[i+2][j+2] > 0)
      {
				printf("\n%d %d %d\n  %d\n%d %d %d",
				a[i][j], a[i][j+1], a[i][j+2], a[i+1][j+1], a[i+2][j], a[i+2][j+1], a[i+1][j+1]);
				co++;
			}
		}
	}
	printf("\n\n %d", co);
}

void main()
{
	detect();
}
