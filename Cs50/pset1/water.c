#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    printf("minutes: ");
    m=GetInt();
    int b = m * 12;
    printf("bottles: %d\n",b);
}