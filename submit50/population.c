#include <stdio.h>

int main(void)
{
    // TODO: Get_start population
    int start, end, years = 0;
    do
    {
        printf("Enter starting population size(minimum9): ");
        scanf("%i", &start);
    }
    while (start < 9);
    // TODO: Get_End population
    do
    {
        printf("Enter ending population size(minimum %i): ", start);
        scanf("%i", &end);
    }
    while (end < start);
    // TODO: Get_Number of years
    while (start < end)
    {
        start = start + start / 3 - start / 4;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
    return 0;
}
