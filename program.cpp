#include <stdio.h>

int main()
{
    int binary, decimal = 0, base = 1, remainder;
    
    printf("Enter the Binary Number = ");
    scanf("%d", &binary);

    int temp = binary;
    while(temp > 0)
    {
        remainder = temp % 10;
        decimal = decimal + remainder * base;
        temp = temp / 10;
        base = base * 2;
    }

    printf("The Binary Value  = %d\n", binary);
    printf("The Decimal Value = %d\n", decimal);

    return 0;
}
