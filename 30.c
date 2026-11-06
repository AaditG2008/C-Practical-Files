#include <stdio.h>
#include <string.h>
void main(){
char str[100],word[50];
int found=0;
printf("Enter the string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str, "\n")]='\0';
printf("Enter the word to find: ");
fgets(word,sizeof(word),stdin);
word[strcspn(word,"\n")]='\0';
int str_len=strlen(str);
int word_len=strlen(word);
if(word_len>0){
for(int i=0;i<=str_len-word_len;i++){
int j;
for(j=0;j<word_len;j++){
if(str[i+j]!=word[j]){
break;
}}if(j==word_len){
printf("Word found at location: %d\n",i+1);
found=1;
break;
}}}
if(!found){
printf("Word not found\n");
}printf("Name - Aadit Gupta\nRoll Number - 56\n");
}
