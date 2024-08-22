//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>

int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

    int num1, num2;
char operation;
 
    printf("Enter Number 1 : ");
scanf("%d", &num1);

printf("Enter Number 2 : ");
scanf("%d", &num2);

printf("Enter the Operation : ");
scanf(" %c", &operation);

switch(operation)
{
case '+':
printf("Sum : %d", num1 + num2);
break;
case '-':
printf("Difference : %d", num1 - num2);
break;
case '*':
printf("Product : %d", num1 * num2);
break;
case '/':
printf("Quotient : %d", num1 / num2);
break;
case '%':
printf("Remainder : %d", num1 % num2);
break;
default:
printf("Invalid Operator!");
}

return 0;
}

