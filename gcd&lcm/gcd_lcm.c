#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int n, m, g, l;
    
    printf("Please enter the two integers which you want to find the HCF of:\n");
    
    printf("First number: ");
    scanf("%d", &n);
    printf("Second number: ");
    scanf("%d", &m);
    
    g = gcd(n, m);
    printf("The HCF of %d and %d is %d\n", n, m, g);
    l = lcm(n, m);
    printf("The LCM of %d and %d is %d\n", n, m, l);

    system("pause");
    return 0;
}

int gcd(int a, int b) 
{
    int r = a % b;
    
    while(r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    
    return b;
}

int lcm(int a, int b)
{   
    return(a * b / gcd(a, b));
}


