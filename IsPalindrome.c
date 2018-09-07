#include <stdio.h>
#include <stdlib.h>




int main() 
{
    char stringx[100];

    printf("Enter a string:");
    scanf("%s", stringx);

    length = strLen(stingx);

    for (i = 0; i < length/2; i++)
    {
        if (stringx[i] != string[length - i - 1])
        {
            notPalindrome = 1;
        }
    }

    if (notPalindrome)
    {
        printf("True");
    }

    else
    {
        printf("False");
    }







    return 0;

}