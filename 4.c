//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
 
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

    int num1, num2;
 
    printf("Enter Number 1 : ");
scanf("%d", &num1);

printf("Enter Number 2 : ");
scanf("%d", &num2);
 
    switch(num1 > num2)
    {   
        case 0: 
            printf("%d is Maximum.", num2);
            break;
        case 1: 
            printf("%d is Maximum.", num1);
            break;
        default:
        	printf("Both are Equal.");
    }
 
    return 0;
}

