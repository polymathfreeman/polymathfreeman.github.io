#include <stdio.h>

int main()
{
  int a = 0;
  
  printf("\nINTEGERS: int\n");
  printf("Use '%%d, myInt' to print 'myInt' content into a string.\n");
  printf("a = %d\tb = %d\tc = %d\n", a, a+1, a+2);
  getchar();

  float fraction = 1 / 2;
  
  printf("\nFLOATS: float\n");
  printf("Use '%%f, myFloat', to print 'myFloat' content into a string.\n");
  printf("\n\t\t1/2 = %f\n\n", fraction);
  fraction = 1.0/2.0;
  printf("1.0/2.0 = %f\t", fraction);
  fraction = 2.0 / 3.0;
  printf("2.0/3.0 = %f\n", fraction);
  fraction = 3.0 / 4.0;
  printf("3.0/4.0 = %f\t", fraction);
  fraction = 4.0 / 5.0;
  printf("4.0/5.0 = %f\n", fraction);
  getchar();

  char myChar = 'A';
  printf("\nCHAR: char\n");
  printf("Use '%%c, myChar' to print 'myChar' content into a string.\n");
  printf("myChar = %c\n", myChar);
  printf("Use '%%d, myChar' to print 'myChar' numeric value into a string.\n");
  printf("myChar = %d\t(ASCII code)\n", myChar);
  printf("Use arithmetic to change character\n");
  printf("myChar + 1 = %d (ASCII) => myChar + 1 = %c (char)\n",
	 myChar + 1, myChar + 1);
  return 0;
}
