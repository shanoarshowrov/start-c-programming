//nth fibonacci series print 
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1;
    printf("Enter a Number for fibonacci series : ");
    scanf("%d", &n);
    int v = 0;
    printf("N-th fibonacci series : ");
    printf("%d %d", first, second);
    for (int i = 3; i <= n; i++)
    {
        v = first + second;
        printf(" %d", v);
        first = second;
        second = v;
    }
}


//nth number fibonacci number print

#include <stdio.h>
int main()
{
    int n, first = 0, second = 1;
    printf("Enter a Number for fibonacci series : ");
    scanf("%d", &n);
    int v = 0;
    for (int i = 3; i <= n; i++)
    {
        v = first + second;
        first = second;
        second = v;
    }
    printf("N-th fibonacci Number = %d", v);
}
