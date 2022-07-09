#include <stdio.h>
#include <math.h>

struct complex
{
  double real;
  double imaginary;
};

struct registre
{
  unsigned int active : 1;
  unsigned int value : 32;
};

int main()
{
  printf("Complex Numbers\n");
  struct complex z;
  double module;
  printf("z = a + ib\n");
  printf("a = ");
  scanf("%lf", &z.real);
  printf("b = ");
  scanf("%lf", &z.imaginary);
  module = sqrt(pow(z.real, 2) + pow(z.imaginary, 2));
  printf("|%.2lf + i*%.2lf| = %.2lf\n", z.real, z.imaginary, module);

  printf("\nBit Fields\n");
  struct registre r;
  printf("Sign = %d\n", r.active);
  printf("Value = %d\n", r.value);
  
  return 0;
}
