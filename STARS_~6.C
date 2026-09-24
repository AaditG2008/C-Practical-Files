#include<stdio.h>
#include<conio.h>
void main(){
int rows,i,j;
clrscr();
printf("Enter number of rows of odd stars required: ");
scanf("%d",&rows);
switch(1){
case 1:
for(i=1;i<=rows;i++){
for(j=1;j<=(2*i)-1;j++){
printf("* ");
}printf("\n");
}}getch();
}
