#include <stdio.h>

int main()
{
  printf("Data Type\tSize\t\tDescription\n");
  printf("int\t\t2 or 4 bytes\tStores whole numbers, without decimals\n");
  printf("float\t\t4 bytes\t\tSufficient for storing 7 decimal digits\n");
  printf("double\t\t8 bytes\t\tSufficient for storing 17 decimal digits\n");
  printf("char\t\t1 byte (8 bits)\tStore a single character or ASCII\n");

  printf("\n------------------------------------------------------------\n");

  printf("\nFormat Specifier\tData Type\n");
  printf("%%d or %%i\t\tint\n");
  printf("%%f\t\t\tfloat\n");
  printf("%%lf\t\t\tdouble\n");
  printf("%%c\t\t\tchar\n");
  printf("%%s\t\t\tstrings\n");
  return 0;
}
