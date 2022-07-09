#include <stdio.h>

int main()
{

  char noString[] = "C does NOT have a string type.\n";
  printf("%s", noString);
  printf("size of noString = %lu\n", sizeof(noString));
  
  char charArray[] = "But you can create an array of chars.\n";
  printf("%s", charArray);
  printf("size charArray = %lu\n", sizeof(charArray));
  
  printf("Use '%%s', myCharArray to print the 'kind of' string.\n");
  printf("Since it is an array of chars you can loop through it!\n");
  char end = 'A';
  int i = 0;
  while (end != '\n')
  {
    end = noString[i];
    printf("%c\t%d\n", end, i);
    i++;
  }
  int lenNoString = i;
  printf("This array has a length of %d characters!\n", lenNoString);
  printf("size of noString = %lu\n", sizeof(noString));
  printf("And modify it!\n");
  printf("For Example Reverse Mode\n");
  
  char stringNo[lenNoString];
  for(int i = lenNoString - 2; i > -1; i--)
  {
    stringNo[lenNoString - 2 - i] = noString[i];
    printf("%c\t%d\n", noString[i], i);
  }

  printf("The original:\t%s\n", noString);
  printf("The reverse:\t%s\n", stringNo);

  printf("Here is the mirror:\n");
  for(int i = 0; i < lenNoString; i++)
  {
    printf("%c\t%c\t%d\n", noString[i], stringNo[i], i); 
  }

  printf("\nAnother way of declaring an array of chars:\n");
  char greetings[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("char greetings[] = {'H', 'e', 'l', 'l', 'o', '\\0'};\n");
  printf("%s\n", greetings);
  printf("size of greetings = %lu\n", sizeof(greetings));
  
  return 0;
}

