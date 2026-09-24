#include <stdio.h>
#include<conio.h>
void main(){
int n,i,j,space,val;
clrscr();
printf("Enter number of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++){
// 1. Print leading spaces to shape the pyramid
for(space=0;space<n-i-1;space++){
printf("  ");
}// 2. The first number in every row is always 1
val=1;
// 3. Print numbers in the row
for(j=0;j<=i;j++){
printf("%4d",val);
// Compute the next number in the same row
val=val*(i-j)/(j+1);
}printf("\n");
}printf("\nName - Aadit Gupta\nRoll Number - 56");
getch();
}
