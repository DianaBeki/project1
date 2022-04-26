#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, v;
    scanf("%d", &x);

    v = 2;
    bool isPrime = true;

    while (v <= x / 2)
    {
        if (x % v == 0)
        {
            isPrime = false;
            break;
        }
        v++;
    }

    if (isPrime)
        printf("A Prime Number");
    else
        printf("Not a prime number");

    return 0;
}