#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

struct student
{
  char name[20];
  int date;
};

typedef struct student *class;

int main()
{
  int i = 3;
  int *p;

  p = &i;
  printf("p = %p\t&i = %p\n", p, &i);
  printf("*p = %d\t\t\ti = %d \n", *p, i);
  getchar();
  
  int j = 6;
  printf("i = %d (&i = %p)\tj = %d (&j = %p)\n", i, &i, j, &j);
  
  int *p1, *p2;
  p1 = &i;
  p2 = &j;
  printf("\np1 = &i; p2 = &j;\t");
  *p1 = *p2;
  printf("*p1 = *p2;\n\n");
  printf("i = %d (&i = %p)\tj = %d (&j = %p)\n", i, &i, j, &j);
  printf("\n");
  getchar();
  
  i = 3; j = 6;
  printf("\ni = 3; j = 6;\n");
  printf("i = %d (&i = %p)\tj = %d (&j = %p)\n", i, &i, j, &j);
  p1 = &i; p2 = &j; p1 = p2;
  printf("p1 = &i; p2 = &j; p1 = p2;\n");
  printf("i = %d (&i = %p)\tj = %d (&j = %p)\n", i, &i, j, &j);
  printf("*p1 = %d\t*p2 = %d\n", *p1, *p2);
  getchar();
  
  p1 = &i; p2 = p1 + 1;
  printf("\np1 = &i; p2 = p1 + 1;\n");
  printf("p1 = %p\tp2 = %p\n", p1, p2);
  getchar();
  
  printf("\nPointers And Arrays\n");
  int tab[N] = {1, 2, 6, 0, 7};
  printf("\nIncreasing Order:\t");
  for (p = &tab[0]; p <= &tab[N-1]; p++) printf(" %d \t", *p);
  printf("\nDecreasing Order:\t");
  for (p = &tab[N-1]; p >= &tab[0]; p--) printf(" %d \t", *p);
  printf("\n");
  getchar();

  printf("\nDynamic Memory Allocation (malloc from stdlib.h)\n\n");
  i = 3;
  printf("&i = %p\t i = %d\n", &i, i);
  int *myPtr;
  printf("Value of myPtr BEFORE initialization:\t%p\n", myPtr);
  myPtr = (int*)malloc(sizeof(int));
  printf("Value of myPtr AFTER initialization:\t%p\n", myPtr);
  *myPtr = i;
  printf("Value of *myPtr AFTER asignation:\t%d\n", *myPtr);
  getchar();
  printf("\nStay FREE, free the pointer myPtr after using malloc\n");
  free(myPtr);

  j = 6;
  printf("i = %d\tj = %d\n", i, j);
  printf("&i = %p\t&j = %p\n", &i, &j);
  p = (int*)malloc(2 * sizeof(int));
  *p = i;
  *(p + 1) = j;
  printf("p = %p\t*p = %d\tp + 1 = %p\t*(p + 1) = %d\n",
	 p, *p, p + 1, *(p + 1));
  printf("\nStay FREE, free the pointer p after using malloc\n");
  free(p);
  getchar();
  
  printf("\ncalloc (malloc + initialization to 0)\n\n");
  p = (int*)calloc(N, sizeof(int));
  for (i = 0; i < N; i++) printf("*(p + %d) = %d\n", i, *(p + i));
  printf("\nStay FREE, free the pointer p after using calloc\n");
  free(p);
  getchar();

  printf("\nPointer And Array\n");
  p = tab;
  printf("p[i] = *(p + i)\n");
  for (i = 0; i < N; i++)
  {
    printf(" %d\n", *p);
    p++;
  }
  getchar();

  printf("\nMatrix With Pointers\n");
  int k, n;
  printf("Matrix Dimensions\n");
  printf("Number of Lines k = ");
  scanf("%d", &k);
  printf("Number of Columns n = ");
  scanf("%d", &n);
  
  int **tab2;

  tab2 = (int**)malloc(k * sizeof(int*));
  for (i = 0; i < k; i++)
  {
    tab2[i] = (int*)malloc(n * sizeof(int));
    for (j = 0; j < n; j++)
    {
      printf("Enter element line %d column %d\n", i, j);
      printf("a[%d][%d] = ", i, j);
      scanf("%d", *(tab2 + i) + j);
    }
  }
  for (i = 0; i < k; i++)
  {
    if (i == k / 2) printf("M_%d,%d = [\t", k, n);
    else printf("\t[\t");
    for (j = 0; j < n; j++)
      printf("%d\t", tab2[i][j]);
    printf("]\n");
  }
  
  for (i = 0; i < k; i++)
    free(tab2[i]);
  free(tab2);
  getchar();

  printf("\n3D Arrays With Pointers\n");
  int width, length, height;
  printf("3D Array Dimensions\n");
  printf("Width = ");
  scanf("%d", &width);
  printf("Length = ");
  scanf("%d", &length);
  printf("Height = ");
  scanf("%d", &height);
  
  int ***tab3;

  tab3 = (int***)malloc(width * sizeof(int**));
  for (i = 0; i < width; i++)
  {
    tab3[i] = (int**)malloc(length * sizeof(int*));
    for (j = 0; j < length; j++)
    {
      tab3[i][j] = (int*)malloc(height * sizeof(int));
      for (k = 0; k < height; k++)
      {
	printf("a[%d][%d][%d] = ", i, j, k);
	scanf("%d", *(tab3[i] + j) + k);
      }
    }
  }
  
  for (i = 0; i < width; i++)
  {
    printf("\tWidth: %d\n", i);
    printf("\t{\n");
    for (j = 0; j < length; j++)
    {
      printf("\t\t[\t");
      for (k = 0; k < height; k++)
	printf("%d\t", tab3[i][j][k]);
      printf("]\n");
    }
    for (k = 0; k < height; k++)
      printf("\t\t");
    printf("}\n");
    printf(" \t\t\t ");
    for (int c = 0; c < width * length * height; c++) printf("=");
    printf("\n");
  }
  
  for (i = 0; i < width; i++)
  {
    for (j = 0; j < length; j++)
      free(tab3[i][j]);
    free(tab3[i]);
  }
  free(tab3);
  getchar();

  printf("\nPointers And Strings\n");
  char *string;
  string = "String of characters";
  printf("%s\n", string);
  for (i = 0; *string != '\0'; i++) string++;
  printf("Number of characters = %d\n", i);
  getchar();

  printf("\nWith string.h\n");
  char *str1, *str2, *res, *ptrOfStr;

  str1 = "String number 1";
  printf("str1: %s\n", str1);
  
  str2 = "String number 2";
  printf("str2: %s\n", str2);
  
  res = (char*)malloc((strlen(str1) + strlen(str2)) * sizeof(char));
  ptrOfStr = res;
  for (i = 0; i < strlen(str1); i++) *ptrOfStr++ = str1[i];
  for (i = 0; i < strlen(str2); i++) *ptrOfStr++ = str2[i];
  printf("%s\n", res);
  getchar();

  printf("\nPointers And Structs\n");
  class table;
  printf("Number Of Student In The Classroom = ");
  scanf("%d", &n);
  table = (class)malloc(n * sizeof(struct student));

  for (i = 0; i < n; i++)
  {
    printf("\nStudent #%d\n", i);
    printf("Student's name = ");
    scanf("%s", table[i].name);
    printf("\nBirth Date YYYYMMDD = ");
    scanf("%d", &table[i].date);
  }

  printf("\nEnter a number ");
  scanf("%d", &i);
  printf("\nStudent number %d:", i);
  printf("\nname = %s", table[i].name);
  printf("\nBirth Date = %d\n", table[i].date);
  free(table);
  
  return 0;
}
