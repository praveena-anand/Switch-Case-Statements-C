//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
 
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

    int num;
 
    printf("Enter Number : ");
scanf("%d", &num);

switch(num > 1)
{
case 1:
printf("Positive Number");
break;
case 0:
switch(num < 0)
{
case 1:
printf("Negative Number");
break;
case 0:
printf("Zero");
break;
}
break;
}

return 0;
}

