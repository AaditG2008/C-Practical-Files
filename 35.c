#include <stdio.h>
int main(){
int n,sum=0;
printf("Enter size: ");
scanf("%d",&n);
int arr[n];
int *ptr=arr;
printf("Enter elements: ");
for(int i=0;i<n;i++){
scanf("%d",ptr+i);
}for(int i=0;i<n;i++){
sum +=*(ptr+i);
}printf("Sum: %d\n",sum);
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
