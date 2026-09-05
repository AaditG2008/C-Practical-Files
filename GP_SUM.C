#include<stdio.h>
#include<conio.h>
void main(){
float term,com,sum=0;
int terms,i;
clrscr();
printf("Enter the first term: ");
scanf("%f",&term);
printf("Enter the common ratio: ");
scanf("%f",&com);
printf("Enter number of terms: ");
scanf("%d",&terms);
for(i=1;i<=terms;i++){
sum=sum+term;
term=term*com;
}
printf("The sum of this GP is %f\n",sum);
printf("Name - Aadit Gupta\nRoll Number - 56");
getch();
}