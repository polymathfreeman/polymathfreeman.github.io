#include <stdio.h>

int main()
{
  printf("Char\tASCII\tChar\tASCII\tChar\tASCII\tChar\tASCII\n");
  for(int i = 32; i < 128; i++)
  {
    if(i % 4 == 0) printf("\n");
    printf("%c\t%d\t", i, i);
    if(i % 79 == 0) getchar();
  }
  printf("\n");
  return 0;
}
