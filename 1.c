//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
 
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

int n;
printf("Enter a Number : ");
scanf("%d", &n);

switch (n)
{
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Invalid Input");
}
return 0;
}

