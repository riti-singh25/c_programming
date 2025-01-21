#include <stdio.h>

int main()
{
    int i; // Declare variable without initialization (contains garbage value)

    printf("Initial garbage value of i: %d\n", i); // Print uninitialized value of i

    while (i <= 10) // Use the garbage value in the condition
    {
        printf("%d ", i); // Print the garbage value of i
        i++; // Increment i
    }
    
    return 0;
}
