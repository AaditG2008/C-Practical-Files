#include <stdio.h>
int main(){
int n,k;
printf("Enter size and split position: ");
scanf("%d%d",&n,&k);
if(n<=0||k<=0||k>=n){
printf("Invalid array size or split position.\n");
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}int arr[n],temp[k];
printf("Enter elements: ");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}for(int i=0;i<k;i++){
temp[i]=arr[i];
}for(int i=k;i<n;i++){
arr[i-k]=arr[i];
}for(int i=0;i<k;i++){
arr[n-k+i]=temp[i];
}printf("Result: ");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}printf("\n");
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
