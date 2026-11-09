#include <stdio.h>
void swap(int *x,int *y) {
int temp =*x;
*x=*y;
*y=temp;
}int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("Swapped: %d %d\n",a,b);
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
