#include<stdio.h>
#include<string.h>
int main(){
char s[100];
printf("Enter string: ");
scanf("%s",s);
int l=0,r=strlen(s)-1,pal=1;
while(l<r){
if(s[l++]!=s[r--]){
pal=0;
break;
}}printf("%s\n", pal ? "Palindrome" : "Not Palindrome");
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
