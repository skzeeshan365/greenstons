#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[20];
void examples();
void reverseSentence();

int main() 
{
    //Read a string
    /* printf("Enter a string: ");
    scanf("%s", str);
    printf("Entered string is: %s", str); */

    //Read a line in string
    /* printf("Please enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("pring string: ");
    puts(str); */

    //Strings and pointers
    /* char str[] = "hello world!";

    //print string using str pointer
    printf("%c", *str);
    printf("%c", *(str+1));
    printf("%c", *(str+2));
    printf("%c", *(str+3));
    printf("%c\n", *(str+6));

    char *str_ptr;

    // print string using pointer assigned to str char
    str_ptr = str;
    printf("%c", *str_ptr);
    printf("%c", *(str_ptr + 1));
    printf("%c", *(str_ptr + 2));
    printf("%c", *(str_ptr + 3));
    printf("%c", *(str_ptr + 6)); */

    //Strings input and output using gets() & puts functions
    /* printf("Enter a string: ");
    gets(str);
    printf("print the string: ");
    puts(str); */
    examples();
    return 0;
}

void examples()
{
    // Count frequency of a character in a string
    /* char c;
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &c);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    
    printf("Frequency of %c in %s is %d", c, str, count); */

    // C Program to Count the Number of Vowels, Consonants, digits and whitespaces

    /* char line[100];
    int vowels, consonants, digits, spaces;

    vowels = consonants = digits = spaces = 0;
    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; i++)
    {
        line[i] = tolower(line[i]);

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            vowels++;
        } else if (line[i] >= 'a' && line[i] <= 'z')
        {
            consonants++;
        }
        else if (line[i] >= 0 && line[i] <= 9)
        {
            ++digits;
        } else if (line[i] == ' ')
        {
            spaces++;
        }
    }
    printf("No of vowels: %d\n", vowels);
    printf("No of consonants: %d\n", consonants);
    printf("No of digits: %d\n", digits);
    printf("No of whitespaces: %d\n", spaces); */

    //Reverse a sentence using recursion

    /* printf("Enter a sentence: ");
    reverseSentence(); */

    // Concatenate Two Strings Without Using strcat()

    /* char str1[100] = "hello ", str2[] = "world";
    int str_lens = 0, j;

    while (str1[str_lens] != '\0')
    {
        ++str_lens;
    }

    for (j = 0; str2[j] != '\0'; ++j, ++str_lens)
    {
        str1[str_lens] = str2[j];
    }

    str1[str_lens] = '\0';
    puts(str1); */

    // Remove Characters in String Except Alphabets

    /* char line[100];

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0, j; line[i] != '\0'; i++)
    {
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
        {
            for (j = i; line[j] != '\0'; j++)
            {
                line[j] = line[j + 1];
                }
           line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line); */

    // Sort strings in the dictionary order

    /* char c[5][50], temp[50];

    printf("Enter five words: ");

    for (int i = 0; i < 5; i++)
    {
        fgets(c[i], sizeof(c[i]), stdin);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(c[i], c[j]) > 0)
            {
                strcpy(temp, c[i]);
                strcpy(c[i], c[j]);
                strcpy(c[j], temp);
            }
            
        }
        
    }
    

    printf("\nIn the lexicographical order: \n");
    for (int i = 0; i < 5; ++i)
    {
        fputs(c[i], stdout);
    } */
}
/* void reverseSentence() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
       reverseSentence();
       printf("%c", c);
    }
} */