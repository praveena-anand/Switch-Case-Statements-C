//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
 
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

int m;
printf("Enter a Month Number : ");
scanf("%d", &m);

int m30 = 30;
int m31 = 31;
int m28 = 28;

switch (m)
{
case 1:
printf("January : %d", m31);
break;
case 2:
printf("February : %d", m28);
break;
case 3:
printf("March : %d", m31);
break;
case 4:
printf("April : %d", m30);
break;
case 5:
printf("May : %d", m31);
break;
case 6:
printf("June : %d", m30);
break;
case 7:
printf("July : %d", m31);
break;
case 8:
printf("August : %d", m31);
break;
case 9:
printf("September : %d", m30);
break;
case 10:
printf("October : %d", m31);
break;
case 11:
printf("November : %d", m30);
break;
case 12:
printf("December : %d", m31);
break;	
default:
printf("Invalid Input");
}
return 0;
}

