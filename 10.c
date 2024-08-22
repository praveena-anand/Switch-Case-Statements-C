//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
 
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

char choice;
printf("Enter your choice\n1. Triangle(t)\n2. Trapezoid(z)\n3. Circle(c)\n4. Square(s)\n5. Rectangle(r)\n");
scanf(" %c", &choice);

float baseTriangle, heightTriangle;
float base1, base2, height;
float radius;
float side;
float length, breadth;

switch(choice)
{
case 't':
printf("Enter the Base : ");
scanf("%f", &baseTriangle);

printf("Enter the Height : ");
scanf("%f", &heightTriangle);

float areaTrinagle = 0.5 * baseTriangle * heightTriangle;
printf("Area  :%.2f", areaTrinagle);

break;

case 'z':
printf("Enter the Base 1 : ");
scanf("%f", &base1);

printf("Enter the Base 2 : ");
scanf("%f", &base2);

printf("Enter the Height : ");
scanf("%f", &height);

float areaTrapezoid = 0.5 * (base1 + base2) * height;
printf("Area  :%.2f", areaTrapezoid);
break;

case 'c':		
printf("Enter the Radius : ");
scanf("%f", &radius);

float areaCircle = 3.14 * radius * radius;
printf("Area  :%.2f", areaCircle);

break;

case 's':
printf("Enter the Side : ");
scanf("%f", &side);

float areaSquare = side * side;
printf("Area  :%.2f", areaSquare);

break;

case 'r':			
printf("Enter the Length : ");
scanf("%f", &length);

printf("Enter the Breadth : ");
scanf("%f", &breadth);
float areaRectangle = length * breadth;
printf("Area  :%.2f", areaRectangle);

break;

default:
printf("Invalid Input");
}

return 0;
}

