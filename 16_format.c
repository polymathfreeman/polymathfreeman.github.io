#include <stdio.h>

int main()
{
  printf("OUTPUT\n\n");
  
  int i = 23674;
  int j = -23674;
  long int k = (1l << 32);
  double x = 1e-8 + 1000;
  char c = 'A';
  char *chaine = "chaîne de caractères";

  printf("impression de i: \n");
  printf("%d \t %u \t %o \t %x", i, i, i, i);
  printf("\nimpression de j: \n");
  printf("%d \t %u \t %o \t %x", j, j, j, j);
  printf("\nimpression de k: \n");
  printf("%ld \t %lo \t %lx", k, k, k);
  printf("\n%ld \t %lu \t %lo \t %lx", k, k, k, k);
  printf("\nimpression de x: \n");
  printf("%f \t %e \t %g", x, x, x);
  printf("\n%.2f \t %.2e", x, x);
  printf("\n%.20f \t %.20e", x, x);
  printf("\nimpression de c: \n");
  printf("%c \t %d", c, c);
  printf("\nimpression de chaîne: \n");
  printf("%s \t %.10s", chaine, chaine);
  printf("\n");

  printf("INPUT\n");
  printf("entrez un entier sous forme hexadecimale i = ");
  scanf("%x", &i);
  printf("i = %d\n", i);
  
  return 0;
}
