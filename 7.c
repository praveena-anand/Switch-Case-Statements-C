//PRAVEENA ANAND [CH.SC.U4CSE23044]

#include <stdio.h>
#include <math.h>

int main()
{
	printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");
	printf("The equation is ax^2 + bx + c\n");
	
	float a, b, c;
	
	printf("Enter a : ");
	scanf("%f", &a);
	
	printf("Enter b : ");
	scanf("%f", &b);
	
	printf("Enter c : ");
	scanf("%f", &c);
	
	float discriminant = b*b - 4*a*c;
	
	float root1, root2, imaginary;
	
	switch (discriminant > 0)
	{
		case 1:
			root1 = (-b + sqrt(discriminant)) / (2*a);
			root2 = (-b - sqrt(discriminant)) / (2*a);
			printf("2 real and distinct roots %.2f and %.2f exists.", root1, root2);
			break;
		
		case 0:
			switch (discriminant < 0)
			{
				case 1:
					root1 = root2 = -b / (2*a);
					imaginary = 	sqrt(-discriminant) / (2*a);
					printf("2 distinct complex roots %.2f + i%.2f and %.2f - i%.2f exists.", root1, imaginary, root2, imaginary);
					break;
				
				case 0:
					root1 = root2 = -b / (2*a);
					printf("2 real and equal roots %.2f and %.2f exists.", root1, root2);
					break;
			}
			break;
	}
	
	return 0;
}
