/*c program to input N positive integers and
display those numbers starting with a
particular digit*/
#include <stdio.h>

int main() 
{
    int N, j, digit, num, temp;

    printf("How many numbers? ");
    scanf("%d", &N);
    printf("Enter digit to be searched: ");
    scanf("%d", &digit);
    printf("Enter %d numbers:\n", N);

    for (j = 1; j <= N; j++) 
    {
        scanf("%d", &num);
        temp = num;

        
        while (temp >= 10) 
        {
            temp = temp / 10;
        }

        if (temp == digit) 
        {
            printf("%d starts with the digit %d\n", num, digit);
        }
    }

    return 0;
}
