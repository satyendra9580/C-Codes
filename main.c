#include "mylib.h"
#include <stdio.h>

int main()
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";
    char str3[100];

    my_strcpy(str3, str2);
    printf("Copied string: %s\n", str3);

    my_strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("Length of '%s': %d\n", str1, my_strlen(str1));

    return 0;
}

