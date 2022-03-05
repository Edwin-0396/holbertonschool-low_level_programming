#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */


char *to_end(char *s)
{

    if (!*(s+1))
        return (s);

    return (to_end(s + 1));
}

int is_palindrome_out(char *s, char *s1)
{
    if (*s != *s1)
        return (0);

    if (s >= s1)
        return (1);

    return (is_palindrome_out(s + 1, s1 - 1));

}


int is_palindrome(char *s)
{
    char *s1;

    if (!s)
        return (-1);

    if (!*s)
        return (1); 

    s1 = to_end(s);

    return (is_palindrome_out(s, s1));

    /**while (*(s1 + 1))
        s1++;

    while (s <= s1)
    {
        if (*s == *s1)
            s++, s1--;
        else
            return (0);
    }
    return (1);**/
}




