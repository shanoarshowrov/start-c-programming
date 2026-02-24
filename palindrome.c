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





//way -2 using string find a number palindrome or not




#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Input : ");
    scanf("%s", &a);
    int n = strlen(a);

    int i = 0, j = n - 1;
    int pl = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            pl = 0;
            break;
        }
        i++;
        j--;
    }
    if (pl)
    {
        printf("The input statement  is palindrome");
    }

    else
        printf("The input statement is not a plindrome");
}




//way-3 using array find a number palindrome or not 



#include <stdio.h>
int countdigit(int a)
{
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter positive integer");
    }
    else
    {
        int p = countdigit(n);
        int arr[p];
        int j = p - 1;
        while (n != 0)
        {
            arr[j] = n % 10;
            n = n / 10;
            j--;
        }
        int i = 0,k=p-1;
        int pl = 1;
        while (i < k)
        {
            if (arr[i] != arr[k])
            {
                pl = 0;
                break;
            }
            i++;
            k--;
        }
        if (pl)
        {
            printf("The number is palindrome");
        }

        else
        {
            printf("The number is not a plindrome");
        }
    }
}
