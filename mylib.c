#include "mylib.h"

void my_strcpy(char *dest, const char *src)
{
    asm volatile (
        "1:\n"               
        "lodsb\n"            
        "stosb\n"            
        "testb %%al, %%al\n"
        "jnz 1b\n"            
        : 
        : "S"(src), "D"(dest) 
        : "al" 
    );
}

void my_strcat(char *dest, const char *src)
{
    asm volatile (
        "repne scasb\n"      
        "dec %1\n"           
        "1:\n"               
        "lodsb\n"            
        "stosb\n"           
        "testb %%al, %%al\n" 
        "jnz 1b\n"          
        : 
        : "S"(src), "D"(dest) 
        : "al" 
    );
}

int my_strlen(const char *str)
{
    int length;
    asm volatile (
        "xor %%ecx, %%ecx\n" 
        "xor %%al, %%al\n"  
        "not %%ecx\n"  
        "repne scasb\n"    
        "not %%ecx\n"
        "dec %%ecx\n"  
        : "=c"(length) 
        : "D"(str)
        : "al"  
    );
    return length;
}

