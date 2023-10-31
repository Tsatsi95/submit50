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
