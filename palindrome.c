// way-1 find a number id palindrome or not
#include <stdio.h>
int main()
{
    long long n, reverse = 0, origin, rem = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    origin = n;
    if (n <= 0)
    {
        printf("Please enter positive integer");
    }
    else
    {
        while (n != 0)
        {
            rem = n % 10;
            reverse = reverse * 10 + rem;
            n = n / 10;
        }
        if (origin == reverse)
        {
            printf("The number is palindrome");
        }

        else
            printf("The number is not a plindrome");
    }
}
