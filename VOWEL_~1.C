#include<stdio.h>
#include<conio.h>
void main(){
char a;
clrscr();
printf("Enter the character: ");
scanf("%c",&a);
switch(a){
case('a'):
case('e'):
case('i'):
case('o'):
case('u'):
case('A'):
case('E'):
case('I'):
case('O'):
case('U'):
printf("Vowel is present");
break;
default:
printf("Vowel is not present");
}printf("\nName - Aadit Gupta\nRoll Number - 56\n");
getch();
}

