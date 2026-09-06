#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
float a,b,c,d,r1,r2,e;
clrscr();3
printf("Enter value of a,b and c in the quadratic equation:\n");
scanf("%f %f %f",&a,&b,&c);
d=b*b-(4*a*c);
if(d>0){
e=sqrt(d);
printf("The roots are real and distinct\n");
r1=(-b+e)/(2*a);
r2=(-b-e)/(2*a);
printf("The roots are %f and %f\n",r1,r2);
}else if(d==0){
printf("The roots are real and equal\n");
r1=-b/(2*a);
printf("The root is %f\n",r1);
}else{
printf("The roots are imaginary\n");
}
printf("Name - Aadit Gupta\nRoll Number - 56");
getch();
}
