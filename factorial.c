#include <stdio.h>

int fact;
int factorial(int m);
int main(void)
{
    int num, factr;
    // Prompt user for a number.
    printf("Please enter a number of your choice (below 30): ");
    scanf("%d", &num);

    // Apply the factorial function to the input.
    factr = factorial(num);
    printf("The factorial of %d is %d\n", num, factr);
}

int factorial(int m)
{
    if (m < 0)
    {
        return 0;
    }
    if (m <= 1)
    {
        m = 1;
        return m;
    }
    fact = m * factorial(m - 1);
    return fact;
}