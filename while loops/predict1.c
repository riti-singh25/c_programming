#include <stdio.h>
int main()
{
    int i; // 'i' is declared but not initialized, contains garbage value.
    while (i <= 10) // Using uninitialized variable in condition.
    {
        printf("%d ", i); // Printing garbage value of 'i'.
        i++; // Incrementing the garbage value.
    }
    
    return 0;
}
