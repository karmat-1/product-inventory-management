#include <stdio.h>

#define MAX_PRODUCTS 100

struct Product {
    char name[50];
    char code[20];
    float price;
    int quantity;
};

int main() {
    struct Product products[MAX_PRODUCTS];
    int n, i;
    float totalInventoryValue = 0;

    // Get the number of products
    printf("Enter the number of products: ");
    scanf("%d", &n);

    // Input product details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product Name: ");
        scanf("%s", products[i].name);
        printf("Product Code: ");
        scanf("%s", products[i].code);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Quantity in Stock: ");
        scanf("%d", &products[i].quantity);
    }

    // Display product details and compute total inventory value
    printf("\n%-20s %-15s %-10s %-10s %-10s\n", "Product Name", "Product Code", "Price", "Quantity", "Total Value");
    printf("------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        float productValue = products[i].price * products[i].quantity;
        totalInventoryValue += productValue;
        printf("%-20s %-15s %-10.2f %-10d %-10.2f\n", products[i].name, products[i].code, products[i].price, products[i].quantity, productValue);
    }
    printf("------------------------------------------------------------------------\n");
    printf("Total Inventory Value: %.2f\n", totalInventoryValue);

    return 0;
}
