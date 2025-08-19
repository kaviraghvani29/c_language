#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[len] != '\0') 
    {
        len++;
    }

    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is NOT a Palindrome.\n");


///// COMMENT THE ABOVE PROGRAM AND THEN RUN OTHER PROGRAM

    char str[100];
    int freq[256] = {0}; 

    printf("Enter any string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] > 0) 
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }
    return 0;
}
