#include <stdio.h>

int add(int a, int b) {
    int result;
    asm (
        "addl %%ebx, %%eax;"
        : "=a" (result)      
        : "a" (a), "b" (b)   
    );
    return result;
}

int sub(int a, int b) {
    int result;
    asm (
        "subl %%ebx, %%eax;"
        : "=a" (result)      
        : "a" (a), "b" (b)   
    );
    return result;
}

int mul(int a, int b) {
    int result;
    asm (
        "imull %%ebx, %%eax;"
        : "=a" (result)      
        : "a" (a), "b" (b)   
    );
    return result;
}

int arraysum(int *a, int n) {
    int j, result = 0;
    for (j = 0; j < n; j++) {
        asm (
            "addl (%1), %0;"
            : "+r" (result)    
            : "r" (&a[j])     
        );
    }
    return result;
}

int printStr(char *str) {
    int count = 0;
    while (*str) {
        asm (
            "incl %0;"                      
            : "+r" (count)      
            :                          
            );
        putchar(*str);          
        str++;
    }
    return count;
}

int main() {
    int a[10], i, n;
    int value;
    int x, y;
    int var = 0;
    char str[] = "Hello, world!";
    
    while (var <= 5) {
        printf("Enter the option\n");
        scanf("%d", &var);
        
        switch (var) {
            case 1:
                printf("Enter the value of x and y\n");
                scanf("%d%d", &x, &y);
                value = add(x, y);
                printf("Sum: %d\n", value);
                break;
            case 2:
                printf("Enter the value of x and y\n");
                scanf("%d%d", &x, &y);
                value = sub(x, y);
                printf("Difference: %d\n", value);
                break;
            case 3:
                printf("Enter the value of x and y\n");
                scanf("%d%d", &x, &y);
                value = mul(x, y);
                printf("Multiplication: %d\n", value);
                break;
            case 4:
                printf("Enter the value of n\n");
                scanf("%d", &n);
                printf("Enter %d integer values\n", n);
                for (i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                }
                value = arraysum(a, n);
                printf("Array sum is: %d\n", value);
                break;
            case 5:
                value = printStr(str);
                printf("\nNumber of characters printed: %d\n", value);
                break;
            default:
                printf("Default case: program is terminated\n");
                break;
        }
    }
    return 0;
}
