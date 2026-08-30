#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    unsigned long long int f=1;
    clrscr();
    printf("Enter the integer:\n");
    scanf("%d",&n);
    if(n<0) {
	printf("Factorial for a negative number does not exist\n");
    } else {
	for(i=1;i<=n;i++) {
	    f=f*i;
	}
    printf("Factorial of %d is %llu",n,f);
    }
    getch();
}