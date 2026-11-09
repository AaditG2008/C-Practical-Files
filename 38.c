#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char filename[100];
    int ch;
    int lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter file name: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        printf("Name - Aadit Gupta\nRoll Number - 56\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (islower(ch)) {
            lower++;
        } else if (isupper(ch)) {
            upper++;
        } else if (isdigit(ch)) {
            digit++;
        } else if (!isspace(ch)) {
            special++;
        }
    }

    fclose(fp);

    printf("Lowercase = %d\n", lower);
    printf("Uppercase = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special = %d\n", special);

    printf("Name - Aadit Gupta\nRoll Number - 56\n");
    return 0;
}
