#include<stdio.h>
#include<conio.h>
void main(){
int rows,i,j;
clrscr();
printf("Enter number of rows of even stars required: ");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
switch(1){
case 1:
for(j=1;j<=2*i;j++){
printf("* ");
}printf("\n");
}}getch();
}
