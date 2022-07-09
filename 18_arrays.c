#include <stdio.h>

#define N 10

int main()
{
  int tab1[N], tab2[N];
  int i;
  printf("\nArray Without Initialization\n");
  for(i = 0; i < N; i++) printf("tab1[%d] = %d\n", i, tab1[i]);

  printf("\nAgain Randomness\n");
  for (i = 0; i < N; i++)
  {
    tab1[i] = tab2[i];
    printf("tab2[%d] = %d\n", i, tab2[i]);
  }

  printf("\nSome Chars\n");
  char tab[] = "Example";
  for (i = 0; i < N-2; i++) printf("tab[%d] = %c\n", i, tab[i]);

  printf("\nNb char\n");
  printf("Number Of Characters In The Array = %lu\n",
	 sizeof(tab) / sizeof(char));

  printf("\nEnter The Matrix...\n\n");
  int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  for (int i = 0; i < 3; i++)
  {
    if (i == 1) printf("I_3 = ");
    printf("\t[\t");
    for (int j = 0; j < 3; j++)
      printf("%d\t", matrix[i][j]);
    printf("]\n");
  }
  
  return 0;
}
