#include <stdio.h>

int main()
{

  int theYear = 2022;
  printf("The variable theYear = %d\n", theYear);
  printf("The address of the variable theYear is %p\n", &theYear);

  printf("\nA pointer is a variable that stores the memory address of another variable as its value;\n");

  printf("var = %d\taddress of the var = %p\n", theYear, &theYear);

  int* ptrTheYear = &theYear;
  char pointOnTheYear[] = "int* ptrTheYear = &theYear;";
  printf("%s\n\n", pointOnTheYear);

  size_t n = sizeof(pointOnTheYear) / sizeof(pointOnTheYear[0]);
  
  for(int i = 0; i < n; i++)
  {
    while(i < 4)
    {
      printf("%c", pointOnTheYear[i]);
      i++;
    }
    if (i == 4) printf("\t\t'*' means pointer, in this case on an int\n");
    
    while(i < 15 && pointOnTheYear[i + 1] != '=')
    {
      printf("%c", pointOnTheYear[i+1]);
      i++;
    }
    
    if(pointOnTheYear[i + 1] == '=')
      printf("%c\tname of the pointer variable\n",
	     pointOnTheYear[i]);

    /* 
       Check index
       printf("i = %d\n", i);
    */
      
    if (pointOnTheYear[i] == '=')
      printf("%c\t\tassignation symbol\n", pointOnTheYear[i]);
    
    if (pointOnTheYear[i] == '&')
    {
      while(pointOnTheYear[i] != ';')
      {
	printf("%c", pointOnTheYear[i]);
	i++;
      }
      printf("\t'\\&' means address, in this case of 'theYear'\n");
      printf("%c\t\tsignifies the end of the instruction\n",
	     pointOnTheYear[i]);
    }
    
  }
  printf("\n");

  char pointOnTheYear2[] = "int *ptrTheYear = &theYear;";
  printf("%s\n\n", pointOnTheYear2);

  size_t n2 = sizeof(pointOnTheYear2) / sizeof(pointOnTheYear2[0]);
  
  for(int i = 0; i < n2; i++)
  {
    while(i < 3)
    {
      printf("%c", pointOnTheYear2[i]);
      i++;
    }
    if (i == 3) printf("\t\ttype on which the pointer points to\n");
    
    while(i < 15 && pointOnTheYear2[i + 1] != '=')
    {
      printf("%c", pointOnTheYear2[i+1]);
      i++;
    }
    
    if(pointOnTheYear2[i + 1] == '=')
      printf("\t'*' indicates that it's a pointer variable\n");

    /* 
       Check index
       printf("i = %d\n", i);
    */
      
    if (pointOnTheYear2[i] == '=')
      printf("%c\t\tassignation symbol\n", pointOnTheYear2[i]);
    
    if (pointOnTheYear2[i] == '&')
    {
      while(pointOnTheYear2[i] != ';')
      {
	printf("%c", pointOnTheYear2[i]);
	i++;
      }
      printf("\t'\\&' means address, in this case of 'theYear'\n");
      printf("%c\t\tsignifies the end of the instruction\n",
	     pointOnTheYear2[i]);
    }
    
  }
  printf("\n");
 
  printf("'\\&' is the reference operator\n");
  printf("'*' is the dereference operator\n");
  float PHI = 1.618;
  printf("float PHI = 1.618;");
  printf("PHI = %f\t&PHI = %p\n", PHI, &PHI);
  float *ptrPHI = &PHI;
  printf("float *ptrPHI = &PHI;");
  char refEx[] = "The pointer variable *ptrPHI reference to PHI address thanks to \\&";
  printf("%s\n\n", refEx);

  printf("__________\n");
  printf("Reference:\n");
  printf("----------\n");
  printf("To access to PHI address, using the pointer ptrPHI or &PHI\n");
  printf("With '%%p\\n', ptrPHI:\t");
  printf("%p\n", ptrPHI);
  printf("With '%%p\\n', &PHI:\t");
  printf("%p\n", &PHI);
  printf("SAME RESULT!!!\n\n");

  printf("____________\n");
  printf("Dereference:\n");
  printf("------------\n");
  printf("To access to PHI value, using the pointer with the '*' *ptrPHI\n");
  printf("With '%%.3f\\n', *ptrPHI:\t");
  printf("%.3f\n", *ptrPHI);
  printf("With '%%.3f\\n', PHI:\t");
  printf("%.3f\n", PHI);
  printf("SAME RESULT!!!\n\n");

  printf("To make things clear!\n");
  
  char refDef[] = "Reference & operator accesses to the memory address.";
  /*
    Check 
    printf("%s\n", refDef);
  */
  
  char derefDef[] = "Dereference * operator accesses to the value.";
  /*
    Check
    printf("%s\n", derefDef);
  */

  size_t rd_size = sizeof(refDef) / sizeof(refDef[0]);
  size_t dd_size = sizeof(derefDef) / sizeof(derefDef[0]);
  int max_size = 0;
  if (rd_size > dd_size) max_size = rd_size;
  else max_size = dd_size;
  
  char definitions[2][max_size];
  
  int indice = 0;
  while(indice != rd_size)
  {
    definitions[0][indice] = refDef[indice];
    indice++;
  }
  
  indice = 0;
  while(indice != dd_size)
  {
    definitions[1][indice] = derefDef[indice];
    indice++;
  }

  for(int i = 0; i < 2; i++) printf("%s\n", definitions[i]);

  printf("2 last things to notice\n");

  printf("\n1st: There are three ways to declare pointer variables:\n\n");
  printf("int* ptrOnInt; /* Most used\n");
  printf("int * ptrOnInt;\n");
  printf("int *ptrOnInt;\n");

  printf("\n2nd: The '*' sign can has 2 different effects:\n\n");
  printf("In the thre previous ways of declaring it signals the pointer type");
  printf("\nAs a dereference operator it allows to access to the value.\n");
  
  
  return 0;
}
