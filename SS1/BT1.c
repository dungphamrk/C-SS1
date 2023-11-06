#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int min = a;
    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    printf("%d",min);
}