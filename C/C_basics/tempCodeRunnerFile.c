/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
   int roll_no;
   char name[20];
};
int main () {
   FILE *of;
   of= fopen ("c11.txt", "w");
   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   struct Student inp1 = {1, "Ram"};
   struct Student inp2 = {2, "Shyam"};
   fwrite (&inp1, sizeof(struct Student), 1, of);
   fwrite (&inp2, sizeof(struct Student), 1, of);
   if(fwrite != 0)
      printf("Contents to file written successfully !\n");
   else
      printf("Error writing file !\n");
   fclose (of);
   FILE *inf;
   struct Student inp;
   inf = fopen ("c11.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&inp, sizeof(struct Student), 1, inf))
      printf ("roll_no = %d name = %s\n", inp.roll_no, inp.name);
   fclose (inf);
} */

/* #include <stdio.h>

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

int main()
{
   int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

   printf("Enter rows and column for first matrix: ");
   scanf("%d %d", &rowFirst, &columnFirst);

   printf("Enter rows and column for second matrix: ");
   scanf("%d %d", &rowSecond, &columnSecond);

   // If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
   while (columnFirst != rowSecond)
   {
      printf("Error! column of first matrix not equal to row of second.\n");
      printf("Enter rows and column for first matrix: ");
      scanf("%d%d", &rowFirst, &columnFirst);
      printf("Enter rows and column for second matrix: ");
      scanf("%d%d", &rowSecond, &columnSecond);
   }

   // Function to take matrices data
   enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

   // Function to multiply two matrices.
   multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

   // Function to display resultant matrix after multiplication.
   display(mult, rowFirst, columnSecond);

   return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
   int i, j;
   printf("\nEnter elements of matrix 1:\n");
   for (i = 0; i < rowFirst; ++i)
   {
      for (j = 0; j < columnFirst; ++j)
      {
         printf("Enter elements a%d%d: ", i + 1, j + 1);
         scanf("%d", &firstMatrix[i][j]);
      }
   }

   printf("\nEnter elements of matrix 2:\n");
   for (i = 0; i < rowSecond; ++i)
   {
      for (j = 0; j < columnSecond; ++j)
      {
         printf("Enter elements b%d%d: ", i + 1, j + 1);
         scanf("%d", &secondMatrix[i][j]);
      }
   }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
   int i, j, k;

   // Initializing elements of matrix mult to 0.
   for (i = 0; i < rowFirst; ++i)
   {
      for (j = 0; j < columnSecond; ++j)
      {
         mult[i][j] = 0;
      }
   }

   // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
   for (i = 0; i < rowFirst; ++i)
   {
      for (j = 0; j < columnSecond; ++j)
      {
         for (k = 0; k < columnFirst; ++k)
         {
            mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
         }
      }
   }
}

void display(int mult[][10], int rowFirst, int columnSecond)
{
   int i, j;
   printf("\nOutput Matrix:\n");
   for (i = 0; i < rowFirst; ++i)
   {
      for (j = 0; j < columnSecond; ++j)
      {
         printf("%d  ", mult[i][j]);
         if (j == columnSecond - 1)
            printf("\n\n");
      }
   }
} */

/* #include <stdio.h>

void enterElements(int arr1[10][10], int arr2[10][10], int r1, int r2, int c1, int c2);
void multiplyMatrix(int arr1[10][10], int arr2[10][10], int result[10][10], int r1, int r2, int c1, int c2);
void display(int result[10][10], int r1, int c2);

int main()
{
   int arr1[10] [10], arr2[10] [10], result[10] [10], r1, r2, c1, c2;

   printf("Enter rows and columns of first matrix:\n");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and columns of second matrix:\n");
   scanf("%d %d", &r2, &c2);

   while (c1 != r2)
   {
      printf("Error! column of first matrix not equal to row of second.\n");
      printf("Enter rows and column for first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and column for second matrix: ");
      scanf("%d%d", &r2, &c2);
   }
   enterElements(arr1, arr2, r1, r2, c1, c2);
   multiplyMatrix(arr1, arr2, result, r1, r2, c1, c2);
   display(result, r1, c2);
}

void enterElements(int arr1[][10], int arr2[][10], int r1, int r2, int c1, int c2)
{
   int i, j;
   printf("\nEnter elements of matrix 1:\n");
   for (i = 0; i < r1; ++i)
   {
      for (j = 0; j < c1; ++j)
      {
         printf("Enter elements a%d%d: ", i + 1, j + 1);
         scanf("%d", &arr1[i][j]);
      }
   }

   printf("\nEnter elements of matrix 2:\n");
   for (i = 0; i < r2; ++i)
   {
      for (j = 0; j < c2; ++j)
      {
         printf("Enter elements b%d%d: ", i + 1, j + 1);
         scanf("%d", &arr2[i][j]);
      }
   }
}

void multiplyMatrix(int arr1[][10], int arr2[][10], int result[][10], int r1, int r2, int c1, int c2)
{
   int i, j, k;

   for (i = 0; i < r1; ++i)
   {
      for (j = 0; j < c2; ++j)
      {
         result[i][j] = 0;
      }
   }

   for (i = 0; i < r1; i++)
   {
      for (j = 0; j < c2; j++)
      {
         for (k = 0; k < c1; k++)
         {
            result[i][j] += arr1[i][k] * arr2[k][j];
         }
      }
   }
}

void display(int result[][10], int r1, int c2)
{
   for (int i = 0; i < r1; i++)
   {
      for (int j = 0; j < c2; j++)
      {
         printf("%d  ", result[i][j]);
         if (j == c2 - 1)
         {
            printf("\n");
         }
      }
   }
} */

// Strings

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// enum boolean {true, false};

// int add(int, int);
// int sub(int, int);
// void display(int (*ptr)(int, int))
// {
//    printf("%d\n", ptr(5, 1));
// }

// int main()
// {
   // char s[] = "123456";
   // printf("%d", sizeof(s));

   /* int a, b, c;
   a = 10;
   b = 5;

   for (int i = 0; i < 2; i++)
   {
      c = a++;
   }
   printf("%d", c); */

   /* char x[10], y[10];
   enum boolean isSame;
   printf("Enter string 1:\n");
   gets(x);
   printf("Enter string 2:\n");
   gets(y);

   for (int i = 0; x[i] != '\0' || y[i] != '\0'; i++)
   {
      if (x[i] != y[i])
      {
         isSame = false;
         break;
      }
      
   }
   if (isSame)
   {
      printf("False %d\n", isSame);
   } else {
      printf("True %d\n", isSame);
   }

   printf(isSame ? "Not same\n": "same\n");

   printf("%d", strcmp(x, y)); */

   // char string[10] = {"zeeshan"};
   // char ch;
   // int len = strlen(string);

   /* for (int i = 0; i < len/2; i++)
   {
      ch = string[i];
      string[i] = string[len-1-i];
      string[len-1-i] = ch;
   } */

   // for (int i = 0; i < len; i++)
   // {
   //    if (string[i] >= 65 && string[i] <= 90)
   //    {
   //       string[i] = string[i]+32;
   //    }
      
   // }
   
   
   // printf("Reversed string: %s", string);

   /* int a = 5, *p, **q;
   p = &a;
   q = &p;
   printf("%d\n", &p);
   printf("%d", *q); */

   /* int x[5] = {1, 2, 4, 5, 6};
   int *ptr, *qPtr, index;

   ptr = x;
   qPtr = &x[3];

   printf("BaseAddr: %d\n", x);
   printf("Address of ptr: %d\n", ptr);
   printf("Value of ptr: %d\n", *ptr);
   printf("Address of qPtr: %d\n", qPtr);
   printf("Value of qPtr: %d\n", *qPtr);

   printf("Diff addr: %d", ptr-qPtr); */

   /* int a[] = {10, 11, -1, 56, 67, 5, 4};
   int *p, *q;

   p = a;
   q = &a[0] + 3;

   printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
   printf("%d\n", *p);
   printf("%d\n", (*p)++);
   printf("%d\n\n", (*p)++);
   q--;
   printf("%d\n", (*(q+2))--);
   printf("%d\n", *(p+2)-2);
   printf("%d", *(p++ -2)-1); */

   /* int a = 9;
   void *p;

   p = &a;
   *(int *)p = 5; */
  
  /* int *p;
  printf("%d", *p); */

  /* display(add);
  display(sub); */
// }

/* int add(int a, int b)
{
   return a+b;
}
int sub(int a, int b)
{
   return a-b;
} */

/* typedef int (*fptr)(int, int);

struct test
{
   int a, b;
   fptr fPtr;
};

int add(int a, int b)
{
   return a+b;
} */

// void fact(int);

// int test(int);

// int fun1(int);
// int fun2(int);

// void count(int);

/* typedef struct test
{
   char c;
   int n;
   double b;
} test;


int main()
{ */
   /* int a, b, ch;
   int (*fptr[4])(int, int) = {add, sub};

   printf("Request codes\n");
   printf("Addition = 0\n");
   printf("Subtraction = 1\n");
   printf("Multiplycation = 2\n");
   printf("Division = 3\n");

   printf("Enter Request code: ");
   scanf("%d", &ch);
   printf("Enter 2 Nos: ");
   scanf("%d %d", &a, &b);

   printf("Result: %d", fptr[ch](a, b)); */

   /* struct test test;
   test.a = 2;
   test.b = 3;
   test.fPtr = add;
   printf("%d", test.fPtr(test.a, test.b)); */

   // fact(5);

   // printf("%d", fun1(5));
   // count(3);

   /* printf("%d\n", sizeof(char));
   printf("%d\n", sizeof(short int));
   printf("%d\n", sizeof(int));
   printf("%d\n", sizeof(long int));
   printf("%d\n", sizeof(long long int));
   printf("%d\n", sizeof(float));
   printf("%d\n", sizeof(double));
   printf("%d\n", sizeof(long double)); */
/* } */

/* void fact(int n)
{
   if (n<1)
   {
      return;
   } else {
      printf("%d\n", n-1);
      fact(n-1);
      printf("\n%d\n", n);
   }
} */

/* int test(int n)
{
   int s = 0;
   if (n == 1)
   {
      return n;
   }
   return n + test(n - 1);
} */

/* int fun1(int n)
{
   if (n <= 1)
   {
      return 1;
   } else {
      return n * fun2(n-1);
   }
   
}

int fun2(int n)
{
   if (n <= 1)
   {
      return 1;
   }
   else
   {
      return n * fun1(n - 1);
   }
} */

/* void count(int n)
{
   static int d = 1;
   printf("%d\n", n);
   printf("%d\n", d);
   d++;
   if (n > 1)
   {
      count(n-1);
   } else {

   printf("%d\n", d);
   }
   
} */

/* char location[50] = {"C:/Users/zeeshan/OneDrive/VSCode/Data/"};
char *filename;

int main()
{
   FILE *fptr;
   
   filename = "testing.txt";
   fptr = fopen(strcat(location, filename), "w+");

   if (fptr == NULL)
   {
      printf("File not opened");
      exit(1);
   }

   fprintf(fptr, "%s", "sdfdafasf");
   rewind(fptr);
   do
   {
      char c = fgetc(fptr);
      putchar(c);
   } while (!feof(fptr));
   
} */

/* typedef enum {
   false,
   true
} bool;

void main()
{
   bool isChecked;

   isChecked = false;

   if (isChecked)
   printf("Checked");
   else
   printf("not checked");
   
} */

/* int fun()
{
   static int a = 16;
   return a--;
}
int main()
{
   for (fun(); fun(); fun())
   {
      printf("a = %d\n", fun());
   }
   
} */

/* int main()
{
   char c1[20];
   char c2[20];

   printf("Enter string 1: ");
   gets(c1);
   printf("Enter string 2: ");
   gets(c2);

   printf("Output: %d", strcmp(c1, c2));
} */

/* #include <time.h>

typedef enum {
   false,
   true
} bool;

int main()
{
   char x[10], y[10];
   bool isSame;
   printf("Enter string 1:\n");
   gets(x);
   printf("Enter string 2:\n");
   gets(y);

   for (int i = 0; x[i] != '\0' || y[i] != '\0'; i++)
   {
      if (x[i] != y[i])
      {
         isSame = false;
         break;
      }
      
   }
   if (isSame)
   {
      printf("False %d\n", isSame);
   } else {
      printf("True %d\n", isSame);
   }
} */

/* void update(int *a, int *b)
{
   *a = *a + *b;
   *b = -(b - a);
}

int main()
{
   int a, b;
   int *pa = &a, *pb = &b;

   scanf("%d %d", &a, &b);
   update(pa, pb);
   printf("%d\n%d", a, b);

   return 0;
} */

#include <stdio.h>
// int main()
// {
//    /* static int i = 5;
//    if (--i)
//    {
//       main();
//       printf("%d ", i);
//    } */

//    int x = 10;
//    static int y = x;
//    return 0;
// }

void display(char name[], int age)
{
   printf("Hello %s your age is %d", name, age);
}
int main()
{
   // int a, b;

   // printf("Enter values a & b: ");
   // scanf("%d %d", &a, &b);

   // printf("Values before swapping: %d, %d", a, b);

   // a = a - b;
   // b = a + b;
   // a = b - a;

   // printf("\nValues after swapping: %d, %d", a, b);

   /* int lowercase_vowel, uppercase_vowel;
   char c;

   printf("Enter an alphabet: ");
   scanf("%c", &c);

   lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
   uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

   if (lowercase_vowel || uppercase_vowel)
   printf("Alphabet");
   else
   printf("consonant"); */

   /* int year = 2016;

   if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
   {
      printf("leap year");
   } else
   {
      printf("not a leap year");
   } */

   /* int n;
   printf("Enter an integer: ");
   scanf("%d", &n);

   while (n > 2)
   {
     n = n - 2;
   }

   if (n == 2)
   {
      printf("even");
   } else {
      printf("odd");
   } */

   /* int num, sum = 0;

   do
   {
      printf("Enter the no: ");
      scanf("%d", &num);
      sum += num;
   } while (num != 0);
   
   printf("sum = %d", sum); */

   /* int i = 1, n;

   printf("Enter: ");
   scanf("%d", &n);

   do
   {
      printf("n = %d\n", i);
      i++;
   } while (i <= n); */
   
   
   /* int ID, pwd;
   ID = 100;
   pwd = 200;

   scanf("%d", (printf("Enter ID: "), &ID));

   switch (ID)
   {
   case 100:
      scanf("%d", (printf("Enter password: "), &pwd));
      switch (pwd)
      {
      case 200:
         printf("Welcome");
         break;

      default:
         printf("Please enter valid password");
         break;
      }
      break;
   
   default:
   printf("Please enter valid ID");
      break;
   } */

   /* int i, num[5];

   printf("Enter any 5 no.s\n");

   for (i = 0; i < 5; i++)
   {
      scanf("%d", &num[i]);
   }

   printf("OUTPUT:\n");
   for (i = 0; i < 5; i++)
   {
      printf("%d\n", num[i]);
   } */

   /* char name[20];
   int age;

   printf("Enter your name: ");
   scanf("%s", name);

   printf("Enter your age: ");
   scanf("%d", &age);

   display(name, age); */

   for (int i = 1; i <= 10; i++)
   {
      printf("%d\t", i);
   }
   
}