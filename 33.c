#include <stdio.h>
int isSubset(int a1[],int n1,int a2[],int n2){
for(int i=0;i<n2;i++){
int found=0;
for(int j=0;j<n1;j++){
if(a2[i]==a1[j]){
found=1;
break;
}}if(!found){
return 0;
}}return 1;
}int main(){
int a1[]={1, 2, 3, 4, 5};
int a2[]={2, 4};
int n1=sizeof(a1)/sizeof(a1[0]);
int n2=sizeof(a2)/sizeof(a2[0]);
if (isSubset(a1,n1,a2,n2)) {
printf("Subset\n");
}else{
printf("Not a subset\n");
}printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
