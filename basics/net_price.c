// Calculate net price with 20% discount
// Date : 28-mar-2023

#include <stdio.h>

void main()
{
 int price, discount, net_price;

    printf("Enter price :");
    scanf("%d", &price);

    discount = price * 20 / 100;
    net_price = price - discount;

    printf("Price        : %5d\n", price);
    printf("- Discount   : %5d\n", discount);
    printf("Net price    : %5d",net_price);
}
