#include <stdio.h>
#include <math.h>

int max3(int a, int b, int c);
void fillArrOfChar(int arraySize, int index, int nbIndex,
		   char arrayToCopy[arraySize],
		   char arrayToFill[index][arraySize]);
int factorial(int n);
int wait(char title[50]);

int main()
{
  
  char builtin[] = "Predefined Functions";
  int choice = 0;
  choice = wait(builtin);
  printf("choice = %d\n", choice);
  if(choice == 1)
  {
    printf("%s\n", builtin);

    printf("Technically, the main() is itself a function.\n");
    printf("printf() is of course a function.\n");
    printf("scanf() is also a built-in function\n");
    printf("getchar()\n");
  }
  getchar();

  char ownFcts[] = "Create Your Own Functions";
  choice = 0;
  choice = wait(ownFcts);
  printf("choice = %d\n", choice);
  if(choice == 1)
  {
    printf("%s\n\n", ownFcts);
    char fctSyntax0[] = "void hello()\n{\n\tprintf(\"Hello World\");\n}";
    size_t fctS0_size = sizeof(fctSyntax0)/sizeof(fctSyntax0[0]);
  
    char fctSyntax1[] = "int plus1(int a)\n{\n\treturn a + 1;\n}";
    size_t fctS1_size = sizeof(fctSyntax1)/sizeof(fctSyntax1[0]);
  
    char fctSyntax2[] = "int add(int a, int b)\n{\n\treturn a + b;\n}";
    size_t fctS2_size = sizeof(fctSyntax2)/sizeof(fctSyntax2[0]);

    int max_size = max3(fctS0_size, fctS1_size, fctS2_size);
    char fctsSyntaxes[3][max_size];

    int index = 0;
    /*
      fillArrOfChar(fctS0_size, index, 3, 
      &fctSyntax0[fctS0_size],
      fctsSyntaxes[3][fctS0_size]);
    */
    for(int i = 0; i < fctS0_size; i++) fctsSyntaxes[0][i] = fctSyntax0[i];
    for(int i = 0; i < fctS1_size; i++) fctsSyntaxes[1][i] = fctSyntax1[i];
    for(int i = 0; i < fctS2_size; i++) fctsSyntaxes[2][i] = fctSyntax2[i];

    for(int i = 0; i < 3; i++)
      {
	printf("___________________________________________________\n");
	printf("Syntax Example For a Function With %d parameter(s):\n", i);
	printf("---------------------------------------------------\n\n");
	printf("%s\n\n", fctsSyntaxes[i]);
      }
  }
  getchar();

  char recursion[] = "Some Recursion";
  choice = 0;
  choice = wait(recursion);
  printf("choice = %d\n", choice);
  if(choice == 1)
  {
    printf("%s\n\n", recursion);
    int n;
    printf("Enter an integer greater than 0, n = ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    choice = 0;
    char question[] = "Do you want to see a factorial table?";
    char answer[] = "1) Yes 0) No\nYour choice: ";
    printf("%s\n", question);
    printf("%s", answer);
    scanf("%d", &choice);
    if(choice == 1)
    {
      int end = 11;
      printf("Bigest factorial to print? n = ");
      scanf("%d", &end);
      for(int n = 0; n < end+1; n++) printf("%d! = %d\n", n, factorial(n));
    }
  }
  getchar();

  char mathFcts[] = "Math Functions";
  choice = 0;
  choice = wait(mathFcts);
  printf("choice = %d\n", choice);
  if(choice == 1)
  {
    printf("%s\n\n", mathFcts);
    printf("With sqrt √2 = %.17f\n", sqrt(2));
    printf("Rounded Up with ceil %f\n", ceil(sqrt(2)));
    printf("Rounded Down with floor %f\n", floor(sqrt(2)));
    getchar();
    
    for(int i = 0; i < 11; i++)
      printf("2**%d = %.0f\t3**%d = %.0f\n", i, pow(2, i), i, pow(3, i));
  }
  getchar();
  
  const long double PI = acosl(-1.0L);
  printf("\nπ ~ %.20Lf\n\n", PI);

  char trigo[] = "Some Trigonometry";
  choice = 0;
  choice = wait(trigo);
  printf("choice = %d\n", choice);
  if(choice == 1)
  {
    printf("%s\n\n", trigo);
    long double quarter[] = {0.0, PI/6, PI/4, PI/3, PI/2};
    char pi6[] = "π/6";
    size_t p6 = sizeof(pi6) / sizeof(pi6[0]);
  
    char pi4[] = "π/4";
    size_t p4 = sizeof(pi4) / sizeof(pi4[0]);
  
    char pi3[] = "π/3";
    size_t p3 = sizeof(pi3) / sizeof(pi3[0]);
  
    char pi2[] = "π/2";
    size_t p2 = sizeof(pi2) / sizeof(pi2[0]);
  
    char quarterNames[5][10];
    quarterNames[0][0] = '0';
    for(int i = 0; i < p6; i++) quarterNames[1][i] = pi6[i];
    for(int i = 0; i < p4; i++) quarterNames[2][i] = pi4[i];
    for(int i = 0; i < p3; i++) quarterNames[3][i] = pi3[i];
    for(int i = 0; i < p2; i++) quarterNames[4][i] = pi2[i];
  
    printf("\t%s\t%s\t%s\t%s\t%s\n", quarterNames[0],
	   quarterNames[1], quarterNames[2],
	   quarterNames[3], quarterNames[4]);
    printf("sin\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n", sin(quarter[0]),
	   sin(quarter[1]), sin(quarter[2]),
	   sin(quarter[3]), sin(quarter[4]));
    printf("cos\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n", cos(quarter[0]),
	   cos(quarter[1]), cos(quarter[2]),
	   cos(quarter[3]), cos(quarter[4]));
    printf("tan\t%.4f\t%.4f\t%.4f\t%.4f\t%s\n", tan(quarter[0]),
	   tan(quarter[1]), tan(quarter[2]),
	   tan(quarter[3]), "∞");
  }
  
  return 0;
}


int max3(int a, int b, int c)
{
  if (a > b && b > c) return a;
  else if (a > b && a > c) return a;
  else if (a > b && a < c) return c;
  else if (b > c) return b;
  else return c;
}

void fillArrOfChar(int arraySize, int index, int nbIndex,
		   char arrayToCopy[arraySize],
		   char arrayToFill[nbIndex][arraySize])
{
  for(int i = 0; i < arraySize; i++)
    arrayToFill[index][i] = arrayToCopy[i];
}

int factorial(int n)
{
  if (n < 0) return 0;
  else if (n < 1) return 1;
  else return n * factorial(n - 1);
}

int wait(char title[50])
{
  int choice;
  printf("Ready to see some %s?\n", title);
  printf("1) Yes 0) No\nYour choice: ");
  scanf("%d", &choice);
  return choice;
}
