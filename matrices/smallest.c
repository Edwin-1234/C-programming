#include <stdio.h>
#define MAX_SIZE 100
int main ()
{
  int matrix[MAX_SIZE][MAX_SIZE];
  int m, n;
  printf ("Enter the number of rows (m): ");
  scanf ("%d", &m);
  printf ("Enter the number of columns (n): ");
  scanf ("%d", &n);
  printf ("Enter the elements of the matrix:\n");
  for (int i = 0; i < m; i++)
  {
   for (int j = 0; j < n; j++)
   {
	   scanf ("%d", &matrix[i][j]);
   } 
  }
   
   int smallest = matrix[0][0];
   int row = 0, column = 0;
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
	{
	  if(matrix[i][j] < smallest)
	  {
	    smallest = matrix[i][j];
	    row = i;
	    column = j;
	  }
	}
  }
  printf ("The smallest element is %d\n", smallest);
  printf ("Position: row %d, column %d\n", row, column);
  return 0;
}
