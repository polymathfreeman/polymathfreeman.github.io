#include <stdio.h>

int main()
{

  int getInt;
  printf("Enter an integer: ");
  scanf("%d", &getInt);
  printf("You enterred: %d\n", getInt);

  char firstName[30];
  printf("Enter your first name: ");
  scanf("%s", firstName);
  printf("Hello %s.\n", firstName);
  
  
  return 0;
}
