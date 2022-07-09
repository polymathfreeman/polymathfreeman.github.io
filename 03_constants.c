#include <stdio.h>

int main()
{
  const int magicNumber = 3;
  const float sqrt2 = 1.414;
  const double champernowne = 0.1234567891011121314;

  printf("Some CONSTANTS:\n");
  printf("%d is a magic number\n", magicNumber);
  printf("√2 ~ %.3f\n", sqrt2);
  printf("Champernowne's constant ~ %.17lf\n", champernowne);
  
  return 0;
}
