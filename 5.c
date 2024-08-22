//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
 
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

    int num;
 
    printf("Enter Number : ");
scanf("%d", &num);
 
    switch(num % 2 == 0)
    {   
        case 0: 
            printf("Odd");
            break;
        case 1: 
            printf("Even");
            break;
    }
    return 0;
}

