#include <stdio.h>

int main()
{
  printf("if statement: ");
  int myInt = 3;
  if (myInt > 2) printf("myInt = %d > 2\n", myInt);

  printf("\nif... else staments: ");
  myInt = 1;
  if (myInt > 2)
  {
    printf("myInt = %d > 2\n", myInt);
  }
  else printf("myInt = %d <= 2\n", myInt);

  printf("\nif..else if.. else staments: ");
  myInt = 2;
  if (myInt > 2)
  {
    printf("myInt = %d > 2\n", myInt);
  }
  else if (myInt < 2)
  {
    printf("myInt = %d < 2\n", myInt);
  }
  else printf("myInt = %d == 2\n", myInt);

  printf("\nTernary Operator ?\n");
  int age = 17;
  (age < 18) ? printf("%d => kid", age) : printf("%d => adult", age);
  age = 18;
  printf("\n");
  (age < 18) ? printf("%d => kid", age) : printf("%d => adult", age);
  printf("\n");

  printf("\nSwitch\n");
  int day = 1;

  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("There are only 7 days in a week despite the Beatles' song!\n");
  }
  printf("\n");
  
  return 0;
}
