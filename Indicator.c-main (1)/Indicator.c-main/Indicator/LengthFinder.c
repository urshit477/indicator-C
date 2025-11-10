#include <stdio.h>

int main()
{

    char str[100];
    char *ptr;
    int length;

    printf("Enter any string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d\n", length);
    return 0;
}
