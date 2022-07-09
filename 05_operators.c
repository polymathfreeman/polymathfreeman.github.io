#include <stdio.h>

int main()
{
  int a = 1, b = 2;
  printf("\n(a, b) = (%d, %d)\n\n", a, b);
  
  printf("Addition:\t");
  printf("a + b = %d\n", a + b);

  printf("Subtraction:\t");
  printf("a - b = %d\n", a - b);

  printf("Multiplication:\t");
  printf("a * b = %d\n", a * b);

  printf("Division:\t");
  printf("a / b = %d (WARNING! %%d impose int result)\n", a / b);
  printf("WARNING! %%f without float operands gives int\n");
  printf("a / b = %f (WARNING! multiply by 1.0 to get float)\n", a *1.0 / b);

  a = 5;
  b = 3;
  printf("(a, b) = (%d, %d)\n", a, b);
  printf("Modulus:\t");
  printf("a %% b = %d\n", a % b);
  printf("\nIncrement:\t");
  printf("a++ = %d (invisible here)\t++b = %d\n", a++, ++b);
  printf("\t\t(a, b) = (%d, %d) (visible here)\n", a, b);

  printf("\nDecrement:\t");
  printf("a-- = %d (invisible here)\t--b = %d\n", a--, --b);
  printf("\t\t(a, b) = (%d, %d) (visible here)\n", a, b);

  printf("\nComparison Operators: ==, !=, >, <, >=, <=\n");

  printf("\nLogical Operators: && (AND), || (OR), ! (NOT)\n");

  printf("\nSizeof Operator\n");

  int myInt = 2;
  float myFloat = 1.618;
  double myDouble = 1.4142135623;
  char myChar = 'A';

  printf("Use '%%lu', sizeof(myVar) to get the result\n");
  printf("myInt = %d\t\tsizeof(myInt) = %lu\n", myInt, sizeof(myInt));
  printf("myFloat = %f\tsizeof(myFloat) = %lu\n", myFloat, sizeof(myFloat));
  printf("myDouble = %lf\tsizeof(myDouble) = %lu\n", myDouble, sizeof(myDouble));
  printf("myChar = %c\t\tsizeof(myChar) = %lu\n", myChar, sizeof(myChar));
  printf("myChar = %d\t\tsizeof(myChar) = %lu\n", myChar, sizeof(myChar));
  return 0;
}
