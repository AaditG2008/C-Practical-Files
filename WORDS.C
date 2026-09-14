#include<stdio.h>
#include<conio.h>
int main(){
int n,digit,rev=0,total_digits=0;
clrscr();
printf("Enter number: ");
scanf("%d",&n);
if(n==0){
printf("Number in words:\nzero\n");
getch();
return 0;
}while(n>0){
rev=rev*10+(n%10);
n=n/10;
total_digits++;
}printf("Number in words:\n");
while(total_digits>0){
digit=rev%10;
switch(digit){
case 0:
printf("zero ");
break;
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
}rev=rev/10;
total_digits--;
}printf("\nName - Aadit Gupta\nRoll Number - 56");
getch();
return 0;
}
