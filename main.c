#include <stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: command arguments
 *
 * Return: 0
 */

int main(int argc, const char **argv[])
{
    int i = 0;
    while( i < argc)
    {
            printf("argv[%d] : %s\n", i, argv[i]);
            i++;
    }
    printf("Betty is beautiful\n");
    return(0);
}