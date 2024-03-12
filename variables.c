#include <stdio.h>
int main()
{
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = cost_per_item * items;
    char currency = '$';
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost: %.2f %c\n", total_cost, currency);
    return 0;
}