#include <stdio.h>

int main()
{
    float n;

    printf("Enter integer or character or signed integer or flaoting number\n");
    scanf("%f",&n);

    float input = n - (int)n;
    if(input > 0 || input < 0)
    {
        printf("Entered floating point number\n");
    }
    else
    {
        if(n > 0)
        {
            printf(" Entered integer\n");
        }
        else if((char)n < 0)
        {
            printf("Entered signed integer\n");
        }
        else if((n >= 'A' ||n <= 'Z') || (n >= 'a' || n <= 'z'))
        {
            printf("Entered character\n");
        }
        else
        {
            printf("Enter valid n\n");
        }
    }

    return 0;
}
