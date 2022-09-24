/*** PROBLEM IS SOLVED ***/

// Need to apply a formula for calculating memory address of array elements 
// elementAddr = baseAddr + (index * sizeof datatype)
/* Point to be noted.
It can be done using memory alloction with pointers or directly assigning a pointer to the baseAddr
but I need to CALCULATE it from scratch, I don't just want to access it using pointers or
any other builtin features I want to calculate it in my program*/
// Lets take look at an example

#include <stdio.h>

// Program 1
void forTypeChar()
{
    char Arr1[5] = {1, 2, 4, 5, 6};
    char *ptr, index;

    index = 3;
    ptr = Arr1 + (index * sizeof(char));

    printf("BaseAddr: %d\n", Arr1);
    printf("Address: %d\n", ptr);
    printf("Value: %d", *ptr);

    /* As you can see we calculated the memory address and assigned a pointer ptr to it so we can access it,
    So my main problem is to calculate the memory address not to access it,
    Below we wil see where Im getting the problem */
}

/* As we saw in program 1 how can we calculate memory address of an array element of type char and its working perfectly,
but the problem arises when the data type of our array is int, float, double, etc; here we will talk about char and int only

As we know 
char takes 1 byte
int takes 4 btyes
the program is running correctly for type char but not for type int,
Lets see with an example */

// Example 2
void forTypeInt()
{
    int Arr2[5] = {1, 2, 4, 5, 6};
    int *ptr, index;

    index = 1;
    ptr = Arr2 + (index * sizeof(int));

    printf("BaseAddr: %d\n", Arr2);
    printf("Address: %d\n", ptr);
    printf("Value: %d", *ptr);

    /* Here we used int and according to the formula it should calculate the address of index 1 element that's value is 2
    but its calculating the address of last element,
    its happening because int is of 4 bytes and according to our formula (1 * sizeof(int)) should return 4 bytes and add it to baseAddr
    but instead its returning 24 bytes 
    And thats the problem I'm facing with my program */

    /* It can also be done with changing datatype in formula, see Example 3*/
}

// Example 3

void Example3()
{
    int Arr2[5] = {1, 2, 4, 5, 6};
    int *ptr, index;

    index = 1;
    ptr = Arr2 + (index * sizeof(char));

    printf("BaseAddr: %d\n", Arr2);
    printf("Address: %d\n", ptr);
    printf("Value: %d", *ptr);

    /* As you can see its working properly by changing datatype in ptr = Arr2 + (index * sizeof(char)) from int to char,
    but that doesn't make sense as our Array is of int and we cannot and should not use char in the formula;*/
}

void test()
{
    int Arr2[5] = {1, 2, 4, 5, 6};
    int *ptr, index;

    index = 2;
    ptr = Arr2 + index;

    printf("BaseAddr: %d\n", Arr2);
    printf("Address: %d\n", ptr);
    printf("Value: %d", *ptr);

    /* Dont't compare it with Memory allocation in which we use this same concept
    here it is based on Pointer Arithmetic */
}

int main()
{
    // Use forTypeChar and forTypeInt functions here
    test();
    return 0;
}

//That's my problem if you can help me solve it then I will be very glad to you