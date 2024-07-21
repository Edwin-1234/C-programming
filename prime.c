//print prime numbers between two numbers
#include <stdio.h>
#include <math.h>

int main() 
{
    int low, high, i, prime, count = 0;
    
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    
    printf("Prime numbers between %d and %d are:\n", low, high);
    
    while (low <= high) 
    {
        prime = 1;  
        
        if (low <= 1) 
        {
            low = 2;  
        }
        
        for (i = 2; i <= sqrt(low); ++i) 
        {
            if (low % i == 0) 
            {
                prime = 0;  
                break;
            }
        }
        
        if (prime == 1) 
        {
            printf("%d ", low);
            count++;
        }
        
        ++low;
    }
    
    printf("\nThere are %d prime numbers between the given numbers.\n", count);
    
    return 0;
}
