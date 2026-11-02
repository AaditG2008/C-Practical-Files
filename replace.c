#include <stdio.h>
void main(){
int n,count=0;
char ch;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
int duplicate[n];
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
duplicate[i] = 0;
}printf("Enter replacement character: ");
scanf(" %c", &ch);
for(int i=0;i<n;i++){
if(duplicate[i]){
continue;
}for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]){
count++;
duplicate[j]=1;
}}}printf("Total number of duplicate elements: %d\n", count);
printf("Modified array: ");
for(int i=0;i<n;i++){
if(duplicate[i]){
printf("%c ",ch);
}else{
printf("%d ", arr[i]);
}}printf("\n");
printf("Name - Aadit Gupta\nRoll Number - 56");
}
