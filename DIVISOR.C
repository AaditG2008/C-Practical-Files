#include<stdio.h>
#include<conio.h>
void main(){
int i,n;
clrscr();
printf("Enter a postive integer:\n");
scanf("%d",&n);
if(n<=0){
printf("Please enter a positive integer\n");
}
else{
printf("Divisors of %d are:\n",n);
for(i=1;i<=n;i++){
if(n%i==0){
printf("%d\n",i);
}}}
printf("Name - Aadit Gupta\nRoll Number - 56");
getch();
}