#include<stdio.h>
void main(){
int r,c,i,j,min,max;
printf("Enter rows and colums: ");
scanf("%d%d",&r,&c);
int matrix[r][c];
printf("Enter elements:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&matrix[i][j]);
}}min=max=matrix[0][0];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(matrix[i][j]<min){
min=matrix[i][j];
}if(matrix[i][j] > max){
max=matrix[i][j];
}}}printf("Minimum element is: %d\nMaximum element is: %d\n",min,max);
printf("Name - Aadit Gupta\nRoll Number - 56");
}
