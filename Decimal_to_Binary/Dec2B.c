#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dec2Bi(int num);

int main() 
{
    int n;
    printf("Please enter the decimal number you want to convert: \n");
    scanf("%d", &n);

    dec2Bi(n);

    system("pause");
    return 0;
}

void dec2Bi(int num)
{
    int i = 0;
    int size;
    
    size = (log(num)/log(2)) + 1;
    printf("%d in binary is ", num);
    
    int a[size - 1];
    
    while(num > 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (i = size - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
        if ((i % 4 == 0) && (i != 0))
        {
            printf(",");
        }
    }
    printf("\n");
    
    return;
}