#include<stdio.h>
#include "cs50.h"
int main (void)
{
        int points= get_int("how many points did you loose?");

        if (points < 2)
        {
                printf("you lost fewer than me. \n");
        }
        else if (points > 2)
        {
                printf("you lost more points than me. \n");
        }
        else (points = 2)
        {
                printf("we lost the same number of points \n");
        }}