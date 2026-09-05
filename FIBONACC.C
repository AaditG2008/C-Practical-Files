#include<stdio.h>
#include<conio.h>
void main(){
int a=0,b=1,m,i,next;
clrscr();
printf("Enter the number of terms:\n");
scanf("%d",&m);
if(m<=0){
printf("Please enter a valid positive integer");
getch();
return 1;
}
printf("The first %d Fibonacci numbers are:\n",m);
for(i=1;i<=m;i++){
printf("%d ",a);
next=a+b;
a=b;
b=next;
}
printf("\nName - Aadit Gupta\nRoll Number - 56");
getch();
}