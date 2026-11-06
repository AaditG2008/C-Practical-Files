#include <stdio.h>
void main(){
int n,i,j;
printf("Enter rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<= n-i;j++){
printf(" ");
}for(j=i;j<=2*i-1;j++){
printf("%d",j);
}for(j=2*i-2;j>=i;j--){
printf("%d",j);
}printf("\n");
}printf("Name - Aadit Gupta\nRoll Number - 56\n");
}
