#include <stdio.h>

/*
  Structure Definitions
 */

struct ComplexNumber
{
  float real;
  float imaginary;
};

struct structWithStr
{
  int id;
  char initialLetter;
  char myStr[50];
};

struct currentDate
{
  int currentYear;
  int currentMonth;
  int currentCalDate;
  char currentDay[30];
  int currentHour;
};

struct btcStruct
{
  int yearOfStart;
  char creator[50];
  struct currentDate currDate;
  float currentValueInUSD;
};


/*
  Function Prototypes
 */

int wait(char title[50]);
void dispBTC(struct btcStruct btc);
int question(char title[50]);
struct btcStruct updateBTC(struct btcStruct btc);

  
int main()
{

  char complex[] = "Structure Of Complex Numbers";
  int choice = 0;
  choice = wait(complex);
  printf("choice = %d\n", choice);
  
  if(choice == 1)
  {
    printf("%s\n", complex);
    struct ComplexNumber z;
    printf("z = a + ib\n");
    printf("Enter a = ");
    scanf("%f", &z.real);
    printf("Enter b = ");
    scanf("%f", &z.imaginary);
    printf("z = %.2f + i * (%.2f)\n", z.real, z.imaginary);
  }
  getchar();

  char str[] = "Structure With Strings";
  choice = 0;
  choice = wait(str);
  printf("choice = %d\n", choice);
  
  if(choice == 1)
  {
    printf("%s\n", str);
    struct structWithStr sWStr = {1, 'A', "Hello Structure"};
    printf("Structure ID = %d\n", sWStr.id);
    printf("Structure Initial Letter: %c\n", sWStr.initialLetter);
    printf("Structure String: %s\n", sWStr.myStr);
  }
  getchar();

  char btc[] = "Structure Of Bitcoin";
  choice = 0;
  choice = wait(btc);
  printf("choice = %d\n", choice);
  
  if(choice == 1)
  {
    printf("%s\n", btc);
    struct btcStruct btc = {
      2009,
      "Satoshi Nakamoto",
      {2022, 7, 7, "Thursday", 16},
      20527.02
    };
    dispBTC(btc);
    btc = updateBTC(btc);
    dispBTC(btc);
  }
  getchar();
  
  
  return 0;
}

int wait(char title[50])
{
  int choice;
  printf("Ready to see some %s?\n", title);
  printf("1) Yes 0) No\nYour choice: ");
  scanf("%d", &choice);
  return choice;
}

void dispBTC(struct btcStruct btc)
{
  printf("Bitcoin started in %d\n", btc.yearOfStart);
  printf("Bitcoin's creator is %s\n", btc.creator);
  printf("Current Date: %d-%d-%d\n",
	 btc.currDate.currentYear,
	 btc.currDate.currentMonth,
	 btc.currDate.currentCalDate);
  printf("Current Day: %s\n", btc.currDate.currentDay);
  printf("Current Hour: %d\n", btc.currDate.currentHour);
  printf("Current Price: %.2f USD\n", btc.currentValueInUSD);
}

int question(char title[50])
{
  int choice;
  printf("%s\n", title);
  printf("1) Yes 0) No\nYour choice: ");
  scanf("%d", &choice);
  return choice;
}

struct btcStruct updateBTC(struct btcStruct btc)
{
  char currYear[] = "Do you want to update the current year?";
  int choice = question(currYear);
  
  if (choice == 1)
  {
    printf("Enter the current year: ");
    scanf("%d", &btc.currDate.currentYear);
  }
  
  char currMonth[] = "Do you want to update the current month?";
  choice = question(currMonth);
  if (choice == 1)
  {
    printf("Enter the current month: ");
    scanf("%d", &btc.currDate.currentMonth);
  }

  char currCalDate[] = "Do you want to update the current date?";
  choice = question(currCalDate);
  if (choice == 1)
  {
    printf("Enter the current date: ");
    scanf("%d", &btc.currDate.currentCalDate);
  }

  char currDay[] = "Do you want to update the current day?";
  choice = question(currDay);
  if (choice == 1)
  {
    printf("Enter the current day: ");
    scanf("%s", btc.currDate.currentDay);
  }

  char currHour[] = "Do you want to update the current hour?";
  choice = question(currHour);
  if (choice == 1)
  {
    printf("Enter the current hour: ");
    scanf("%d", &btc.currDate.currentHour);
  }

  char currValInUSD[] = "Do you want to update the current value in USD?";
  choice = question(currValInUSD);
  if (choice == 1)
  {
    printf("Enter the current value in USD: ");
    scanf("%f", &btc.currentValueInUSD);
  }

  return btc;
  
}
