#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,i;
clrscr();
printf("Enter Ist number: ");
scanf("%d",&a);
printf("Enter IInd number: ");
scanf("%d",&b);
printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
scanf("%d",&i);
switch(i){
case 1:
c=a+b;
printf("Sum is %d\n",c);
break;
case 2:
c=a-b;
printf("Difference is %d\n",c);
break;
case 3:
c=a*b;
printf("Product is %d\n",c);
break;
case 4:
c=a/b;
printf("Quotient is %d\n",c);
break;
default:
printf("Enter a valid choice\n");
}printf("Name - Aadit Gupta\nRoll Number - 56");
getch();
}

