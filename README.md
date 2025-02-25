
# Product Inventory System

## Description

This is a simple C program that helps track product inventory. Users can enter product details like name, code, price, and quantity. The program calculates the total value for each product and the overall inventory value.

## Features

- Enter product details: name, code, price, and quantity.

- Calculate the total value of each product (price * quantity).

- Display a neatly formatted list of all products with their total values.

- Show the total value of the entire inventory.

## How to Use

- Compile the program using a C compiler like GCC
  ```bash
  gcc inventory_system.c -o inventory_system
  ```
- Run the program
- Enter the number of products you want to add.
- Input the details for each product.
- View the summary of your inventory, including individual product values and the total inventory value.

## Example of output

```sh
Enter the number of products: 2

Enter details for product 1:
Product Name: Laptop
Product Code: LPT123
Price: 800
Quantity in Stock: 5

Enter details for product 2:
Product Name: Mouse
Product Code: MSE456
Price: 25
Quantity in Stock: 10

Product Name         Product Code     Price      Quantity   Total Value
------------------------------------------------------------------------
Laptop              LPT123          800.00     5          4000.00
Mouse               MSE456          25.00      10         250.00
------------------------------------------------------------------------
Total Inventory Value: 4250.00
```
