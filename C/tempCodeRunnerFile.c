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

enum boolean {true, false};

int main()
{
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

   int a = 5, *p, **q;
   p = &a;
   q = &p;
   printf("%d\n", &p);
   printf("%d", *q);
}