//PRAVEENA ANAND [CH.SC.U4CSE23044]
 
#include <stdio.h>
#include <ctype.h>
int main()
{
printf("PRAVEENA ANAND [CH.SC.U4CSE23044]\n");

char alphabet;
printf("Enter a Alphabet: ");
scanf("%c", &alphabet);
alphabet = toupper(alphabet);

switch (alphabet)
{
case 'A':
printf("Vowel");
break;
case 'E':
printf("Vowel");
break;
case 'I':
printf("Vowel");
break;
case 'O':
printf("Vowel");
break;
case 'U':
printf("Vowel");
break;
default:
printf("Consonant");
}

}

