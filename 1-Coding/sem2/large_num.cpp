// #include <stdio.h>
// int main()
// {
//     unsigned long long int num1 = 91435174566238391122ull;
//     printf("%llu", num1);

// }

// #include <stdio.h>

// int main() {
//     unsigned long long int myNum = 1234567890123456789012345678901234567890ull;
//     printf("%llu\n", myNum);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 41

int main()
{
    char num2[MAX_DIGITS + 1] = "91435174566238391122", num1[MAX_DIGITS + 1] = "8126920153643512367";
    int n1[MAX_DIGITS], n2[MAX_DIGITS], result[MAX_DIGITS];
    int carry = 0;

    // Input the two numbers as strings
    // printf("Enter the first number (up to 41 digits): ");
    // scanf("%s", num1);
    // printf("Enter the second number (up to 41 digits): ");
    // scanf("%s", num2);

    // Convert the numbers from strings to arrays of digits
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    for (int i = 0; i < len1; i++)
    {
        n1[i] = num1[len1 - i - 1] - '0';
    }
    for (int i = 0; i < len2; i++)
    {
        n2[i] = num2[len2 - i - 1] - '0';
    }

    // Subtract the second number from the first number
    int len = len1 > len2 ? len1 : len2;
    for (int i = 0; i < len; i++)
    {
        int diff = n1[i] - n2[i] - carry;
        if (diff < 0)
        {
            diff += 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        result[i] = diff;
    }

    // Remove any leading zeros from the result
    while (len > 1 && result[len - 1] == 0)
    {
        len--;
    }

    // Print the result
    printf("Result: ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
