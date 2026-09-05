#include<stdio.h>
#include<conio.h>
void main(){
float term,sum=0;
int i;
clrscr();
for(i=1;i<=20;i++){
term=1.0/i;
sum=sum+term;
}
printf("The sum of the given series is %f",sum);
printf("\nName - Aadit Gupta\nRoll Number - 56");
getch();
}

