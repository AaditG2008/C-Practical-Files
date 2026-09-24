#include<stdio.h>
#include<conio.h>
void main(){
int basic,gross,HRA,DA,choice;
//clrscr();
printf("Enter basic salary: ");
scanf("%d",&basic);
if(basic<=10000){
choice=1;
}else if((basic>10000)&&(basic<=20000)){
choice=2;
}else{
choice=3;
}switch(choice){
case 1:
HRA=basic*0.2;
DA=basic*0.8;
gross=basic+HRA+DA;
break;
case 2:
HRA=basic*0.25;
DA=basic*0.9;
gross=basic+HRA+DA;
break;
case 3:
HRA=basic*0.3;
DA=basic*0.95;
gross=basic+HRA+DA;
break;}printf("HRA = %d and DA = %d\n",HRA,DA);
printf("The Gross Salary is %d",gross);
printf("\nName - Aadit Gupta\nRoll Number - 56");
getch();
}
