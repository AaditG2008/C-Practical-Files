#include <stdio.h>
int main(){
char str[100]="Hello";
char *ptr=str;
while(*ptr!='\0'){
ptr++;
}printf("Length: %ld\n",ptr-str);
printf("Name - Aadit Gupta\nRoll Number - 56\n");
return 0;
}
