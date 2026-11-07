#include <stdio.h>
int isPerfect(int n){
if(n<=1) return 0;
int sum=0;
for(int i=1; i<=n/2;i++){
if(n%i==0){
sum+=i;
}}return(sum == n);
}int main(){
int start,end;
printf("Enter interval: ");
scanf("%d %d",&start,&end);
printf("Perfect numbers: ");
for(int i=start;i<=end;i++){
if(isPerfect(i)){
printf("%d ",i);
}}printf("\n");
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
