#include<stdio.h>
#include<conio.h>
void main(){
int year;
clrscr();
printf("Enter year: ");
scanf("%d",&year);
if((year%4==0 && year%100!=0)||(year%400==0)){
printf("This is a leap year\n");
}else{
printf("This is not a leap year\n");
}
getch();
}