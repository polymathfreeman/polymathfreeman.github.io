#include <stdio.h>

union day
{
  char letter;
  int number;
};

struct coordinates
{
  unsigned int x;
  unsigned int y;
};

union point
{
  struct coordinates coord;
  unsigned long mot;
};

int main()
{
  union day yesterday, tomorrow;
  yesterday.letter = 'F';
  printf("Yesterday = %c\n", yesterday.letter);
  yesterday.number = 5;
  tomorrow.number = (yesterday.number + 2) % 7;
  printf("Tomorrow = %d\n", tomorrow.number);

  union point p1, p2, p3;
  p1.coord.x = 0xf;
  p1.coord.y = 0x1;
  p2.coord.x = 0x8;
  p2.coord.y = 0x8;
  p3.mot = p1.mot ^ p2.mot;
  printf("p3.coord.x = %x \t p3.coord.y = %x\n", p3.coord.x, p3.coord.y);

  printf("\nEnumeration\n");
  enum boolean {false, true};
  enum boolean b;
  b = true;
  printf("b = %d\n", b);
  
  return 0;
}
