#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "olehw";
    unsigned int n;

    n = strspn(s, f);
    
    printf("%u\n", n);
    return (0);
}
