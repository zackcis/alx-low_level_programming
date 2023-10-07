#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable
 * n each time it is executed. Complete the source code in order to print
 * whether the number stored in the variable n is positive or negative.
 *
 * You can find the source code here
 * The variable n will store a different value every time you will run
 * this program
 * You don’t have to understand what rand, srand, RAND_MAX do. Please do
 * not touch this code
 * The output of the program should be:
 * The number, followed by
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * followed by a new line
 * Return: 0 (success) and 1 (failure) to execute
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        else
                printf("%d is zero\n",  n);
        return (0);
