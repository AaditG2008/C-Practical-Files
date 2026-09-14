#include<stdio.h>
#include<conio.h>
void main(){
int n,orig,rev=0,digit;
clrscr();
printf("Enter a 3 digit number: ");
scanf("%d",&n);
if(n<100||n>999){
printf("Enter a 3 digit number only\n");
}else{
orig=n;
while(n>0){
digit=n%10;
rev=rev*10+digit;
n=n/10;
}if(orig==rev){
printf("This number is a palindrome\n");
}else{
printf("This number is not a palindrome\n");
}}printf("Name - Aadit Gupta\nRollNumber - 56");
getch();
}