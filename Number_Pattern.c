#include<stdio.h>
#include<conio.h>
void main(){
int n,i,j;
//clrscr();
printf("Enter number of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++) {
for(j=1;j<=i;j++) {
printf("%d",j);
}for(j=i-1;j>=1;j--){
printf("%d",j);
}printf("\n");
}printf("\nName - Aadit Gupta\nRoll Number - 56");
//getch();
}
