#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    double x;
    do
    {
        x = get_double("Start size: ");
    }
    while(x<0);

    // TODO: Prompt for end size
    double y;
    do
    {
        y = get_double("End size: ");
    }
    while (y<0 || y<x);

    // TODO: Calculate number of years until we reach threshold
    double year = 0;
    int r = x/12;
    do
    {
        x = x+r;
        year++;
    }
    while (x<y);
    // TODO: Print number of years
    printf("Year: %f\n", year);
}
