#include<stdio.h>
#include<conio.h>
void main(){
float x,y;
clrscr();
printf("Enter x coordinate: ");
scanf("%f",&x);
printf("Enter y coordinate: ");
scanf("%f",&y);
if((x==0)&&(y==0)){
printf("The point lies on origin");
}else{
if((x>0)&&(y>0)){
printf("The point lies in Ist quadrant");
}else if((x<0)&&(y>0)){
printf("The point lies in IInd quadrant");
}else if((x<0)&&(y<0)){
printf("The point lies in IIIrd quadrant");
}else if((x>0)&&(y<0)){
printf("The point lies in IVth quadrant");
}else if((x>0)||(x<0)&&(y==0)){
printf("The point lies on x axis");
}else if((x==0)&&(y<0)||(y>0)){
printf("The point lies on y axis");
}
}printf("\nName - Aadit Gupta\nRoll Number - 56");
getch();
}
