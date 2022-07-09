#include <stdio.h>

int main()
{

  int i = 0;
  int j = i;
  
  while (i < 10)
  {
    printf("Inside the while loop...\n");
    printf("i = %d\tj = %d\n", i, j);
    printf("++i = %d\tj++ = %d\n", ++i, j++);
    if (i == 10) printf("Exiting the while loop...\n");
  }

  printf("After the while loop\n");
  printf("i = %d\tj = %d\n", i, j);

  printf("\nThe do while loop\n");
  int n = 9;
  do
  {
    printf("Inside the do while loop...\n");
    printf("n = %d\n", n);
    n++;
    printf("Condition: n < 10\n");
  }
  while (n < 10);
  printf("After the do while loop\n");
  printf("n = %d\n", n);

  n = 10;
  do
  {
    printf("Inside the do while loop...\n");
    printf("n = %d\n", n);
    n++;
    printf("Condition: n < 10\n");
  }
  while (n < 10);
  printf("After the do while loop\n");
  printf("n = %d\n", n);

  printf("\nThe for loop\n");

  for(int i = 0; i < 10; i++) printf("i = %d\n", i);
  
  for(int i = 0; i < 10; ) printf("++i = %d\n", ++i);

  for(int i = 0; i < 10; ) printf("i++ = %d\n", i++);

  int compteur;
  for(compteur = 0; compteur < 10; )
  {
    j = compteur;
    printf("j = compteur, j++ = %d\t", j++);
    printf("++compteur = %d\n", ++compteur);
  }
  printf("After the for loop\n");
  printf("j = %d, compteur = %d\n", j, compteur);

  for(int i = 0; i < 10; i++)
  {
    if (i % 3 == 0) continue;
    printf("if (i %% 3 == 0) continue;\n");
    if (i % 7 == 0) break;
    printf("if (i %% 7 == 0) break;\n");
    printf("i = %d\n", i);
  }
  
  return 0;
}
