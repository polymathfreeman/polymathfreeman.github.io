#include <stdio.h>

int power(int base, int exponent);
int decimal2binary(int num);
int changeEachBit2Opposite(int num);
int binary2decimal(int num);
float root2(int num, int nbDigits);

int main()
{
  printf("Power of 2\tDecimal\t\tBinary\t\tDecimal\n");
  int bin2pow;
  for(int i = 0; i < 8; i++)
  {
    printf("2^%2d\t\t%4d\t\t", i, power(2, i));
    bin2pow = decimal2binary(power(2, i));
    printf("%8d\t\t", bin2pow);
    printf("%8d\n", binary2decimal(bin2pow));
  }
  printf("\n");
  getchar();

  printf("Bit By Bit Operators\n\n");
  
  int a = 77;
  printf("a\t%3d\t\t", a);
  int aBin = decimal2binary(a);
  printf("%8d\t", aBin);
  printf("%3d\n", binary2decimal(aBin));

  int b = 23;
  printf("b\t%3d\t\t", b);
  int bBin = decimal2binary(b);
  printf("%8d\t", bBin);
  printf("%3d\n", binary2decimal(bBin));

  printf("a & b\t%3d\t\t", a & b);
  int aETbBin = decimal2binary(a & b);
  printf("%8d\t", aETbBin);
  printf("%3d\n", binary2decimal(aETbBin));

  
  printf("a | b\t%3d\t\t", a | b);
  int aOUbBin = decimal2binary(a | b);
  printf("%8d\t", aOUbBin);
  printf("%3d\n", binary2decimal(aOUbBin));

  
  printf("a ^ b\t%3d\t\t", a ^ b);
  int aXORbBin = decimal2binary(a ^ b);
  printf("%8d\t", aXORbBin);
  printf("%3d\n", binary2decimal(aXORbBin));

  
  printf("~a\t%3d\t\t", ~a);
  int aTildeBin = changeEachBit2Opposite(a);
  printf("%8d\t", aTildeBin);
  printf("%3d\n", binary2decimal(aTildeBin));
  
  printf("b << 2\t%3d\t\t", b << 2);
  int b2gaucheBin = decimal2binary(b << 2);
  printf("%8d\t", b2gaucheBin);
  printf("%3d\n", binary2decimal(b2gaucheBin));

  
  printf("b << 5\t%3d\t\t", b << 5);
  int b5gaucheBin = decimal2binary(b << 5);
  printf("%8d\t", b5gaucheBin);
  printf("%3d\n", binary2decimal(b5gaucheBin));

  
  printf("b >> 1\t%3d\t\t", b >> 1);
  int b1droiteBin = decimal2binary(b >> 1);
  printf("%8d\t", b1droiteBin);
  printf("%3d\n", binary2decimal(b1droiteBin));

  getchar();
  printf("Coma Operator\n\n");
  
  b = ((a = 0), (a + 1));
  printf("b = ((a = 0), (a + 1));\t");
  printf("=> (a, b) = (%d, %d)\n", a, b);
  
  b = ((a = 1), (a += 2));
  printf("b = ((a = 1), (a += 2));\t");
  printf("=> (a, b) = (%d, %d)\n", a, b);
  
  b = ((a = 3), (a += 2), (a + 1));
  printf("b = ((a = 3), (a += 2), (a + 1);\t");
  printf("=> (a, b) = (%d, %d)\n", a, b);

  int c = 0;
  c = ((a = 1), (b = 2), (a + b));
  printf("c = ((a = 1), (b = 2), (a + b));\t");
  printf("=> (a, b, c) = (%d, %d, %d)\n", a, b, c);
  getchar();

  printf("Fibonacci Numbers\n\n");
  printf("Initialization...\n");
  c = ((a = 0), (b = a + 1), (a + b));
  printf("c = ((a = 1), (b = a + 1), (a + b));\t");
  printf("=> (a, b, c) = (%d, %d, %d)\n", a, b, c);

  printf("\nLet's Get Looping!\n");
  for(int i = 0; i < 25; i++)
  {
    c = ((a = b), (b = c), (a + b));
    printf("c = ((a = b), (b = c), (a + b)); ");
    printf("=> (a, b, c) = (%d, %d, %d)\n", a, b, c);
    if(i % 12 == 0) getchar();
  }

  printf("\nLet's do some casting\n");
  float goldenRatio = (1 + root2(5, 3)) / 2;
  printf("%d/%d = %.3f\n", c, b, (float)c/b);
  printf("Golden Ratio = %.3f\n", goldenRatio);
  printf("\n");

  for(int i = 0; i < 21; i++)
  {
    if(i % 12 == 0) getchar();
    printf("√%d = %.3f\n", i, root2(i, 3));
  }

  printf("√%d = %.3f\n", 25, root2(25, 3));
  
  return 0;
}


int power(int base, int exponent)
{
  int result = 1;
  for(int i = 0; i < exponent; i++) result *= base;
  return result;
}

int decimal2binary(int num)
{
  int bits[8];
  for(int i = 0; i < 8; i++) bits[i] = 0;
  if (num < 0) bits[7] = 1;
  
  int i = 0;
  while (num > 0)
  {
    bits[i] = num % 2;
    num /= 2;
    i++;
  }
  
  char resultBits[8];
  int resultNum = 0;
  for(int j = 0; j < 8; j++)
  {
    resultBits[j] = bits[8 - j - 1];
    resultNum += power(10, j) * bits[j];
  }
  return resultNum;
}

int changeEachBit2Opposite(int num)
{
  int bits[] = {0, 0, 0, 0, 0, 0, 0, 0, '\0'};
  int i = 0;
  while (num > 0)
  {
    bits[i] = num % 2;
    num /= 2;
    i++;
  }

  
  char resultBits[8];
  int resultNum = 0;
  for(int j = 0; j < 8; j++)
  {
    
    if(bits[8 - j - 1] == 0) resultBits[j] = 1;
    else resultBits[j] = 0;
    resultNum += (1 - bits[j]) * power(10, j);
  }
  return resultNum;
}

int binary2decimal(int num)
{
  int decimal = num % 2;
  if(num / power(10, 8) == 1) decimal *= -1;
  num = num % power(10, 8);
  for(int i = 7; i > 0; i--)
  {
    decimal += power(2, i) * ( num / power(10, i) );
    num = num % power(10, i);
  }

  return decimal;
}

float root2(int num, int nbDigits)
{
  float root = (float)num / 2;
  float treshold = 1.0 / power(10, nbDigits); 
  
  while( (num - root*root > treshold) || (root * root - num > treshold) )
  {
    if(root * root - num < 0) root += (float)(num - root) / 2;
    else root -= (float)(num - root)/2;
  }
  return root;
}
