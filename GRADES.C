#include<stdio.h>
#include<conio.h>
void main(){
float marks;
printf("Enter marks of student:\n");
scanf("%f",&marks);
if(marks>=80 && marks<=90){
printf("Excellent Grade A\n");
}else if(marks>=60 && marks<80){
printf("Grade B\n");
}else if(marks>=40 && marks<60){
printf("Grade C\n");
}else{
printf("Fail");
}getch();
}