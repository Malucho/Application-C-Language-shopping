#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

int menu, quantity;
int total;
int i;
int maizeflour = 200;
int sugar = 150;
int oil = 400;
int lentils = 300;
int soap = 150;

for (i = 1; i < 6; i++)
{
printf("Welcome to the shopping list application!\n");
printf("Choose an item from the menu below to add to your shopping list: \n");
printf("1. Maize flour - KES 200\n");
printf("2. Sugar - KES 150\n");
printf("3. Cooking oil - KES 400\n");
printf("4. Lentils - KES 300\n");
printf("5. Soap - KES 150\n");
scanf("%d", &menu);

switch (menu)
{
case 1:
printf("Enter the quantity of maize flour: ");
scanf("%d", &quantity);
total = quantity * maizeflour;
printf("Total cost of maize flour = %d\n", total);
break;

case 2:
printf("Enter the quantity of sugar: ");
scanf("%d", &quantity);
total = quantity * sugar;
printf("Total cost of sugar = %d\n", total);
break;

case 3:
printf("Enter the quantity of oil: ");
scanf("%d", &quantity);
total = quantity * oil;
printf("Total cost of oil = %d\n", total);
break;

case 4:
printf("Enter the quantity of lentils: ");
scanf("%d", &quantity);
total = quantity * lentils;
printf("Total cost of lentils = %d\n", total);
break;

case 5:
printf("Enter the quantity of soap: ");
scanf("%d", &quantity);
total = quantity * soap;
printf("Total cost of soap = %d\n", total);
break;

default:
printf("Invalid input! Please enter a number between 1 and 5.\n");
break;
}
}
return 0;
}
