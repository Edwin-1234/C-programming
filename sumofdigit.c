//sum of digits and reverse of a number
#include <stdio.h>

int main() 
{
    int num, reverse = 0, remainder, sum = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    while (num > 0)
    {
        remainder = num % 10;  
        sum += remainder;      
        reverse = (reverse * 10) + remainder;  
        num /= 10;  
    }
    
    printf("Sum of digits = %d\n", sum);
    printf("Reverse of the number = %d\n", reverse);
    
    return 0;
}
