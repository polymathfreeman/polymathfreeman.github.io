#include <stdio.h>

int main()
{

  printf("Arrays of Integers:\n");
  printf("1st Way: Declare all the values once\n");
  int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("\nint digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};\n\n");
  for (int i = 0; i < 10; i++)
  {
    printf("digits[%d] = %d\t", i, digits[i]);
    printf("digits[9 - %d] = %d\t", i, digits[9-i]);
    printf("2 * digits[%d] = %d\n", i, 2*digits[i]);
  }

  printf("\nChange elements:\n");
  printf("For example: ");
  printf("digits[i] = 10 + digits[i];\n");
  for (int i = 0; i < 10; i++)
  {
    digits[i] = 10 + digits[i];
    printf("digits[%d] = %d\n", i, digits[i]);
  }

  printf("\n2nd Way: Declare empty array with a fixed size\n");
  int tens[9];
  printf("int tens[9];\n");
  for(int i = 0; i < 9; i++)
  {
    tens[i] = (i + 1) * 10;
    printf("tens[%d] = %d\n", i, tens[i]);
  }
  
  return 0;
}
