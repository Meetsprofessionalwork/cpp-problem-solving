// costing and selling price
#include <stdio.h>
int main()
{
    float cost_price, selling_price;
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);
    
    if (selling_price > cost_price) {
        printf("Profit: %.2f\n", selling_price - cost_price);
    } else if (selling_price < cost_price) {
        printf("Loss: %.2f\n", cost_price - selling_price);
    } else {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}