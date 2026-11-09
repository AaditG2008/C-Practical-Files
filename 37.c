#include <stdio.h>
#include <string.h>

#define FILE_NAME "student.dat"

struct Student {
    int roll;
    char name[30];
    float marks;
};

void readStudent(struct Student *s) {
    printf("Enter Roll: ");
    scanf("%d", &s->roll);
    getchar(); // Clear trailing newline from input buffer

    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void addRecord(const char *mode) {
    FILE *fp = fopen(FILE_NAME, mode);
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    struct Student s;
    readStudent(&s);
    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Record saved successfully.\n");
}

void display() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("No file found\n");
        return;
    }

    struct Student s;
    printf("\nRoll\tName\t\tMarks\n");
    printf("------------------------------------\n");
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("%d\t%-15s\t%.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
}

void edit() {
    FILE *fp = fopen(FILE_NAME, "rb+");
    if (fp == NULL) {
        printf("No file found\n");
        return;
    }

    int target_roll, found = 0;
    struct Student s;

    printf("Enter Roll number to edit: ");
    scanf("%d", &target_roll);

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        if (s.roll == target_roll) {
            printf("Record found. Enter new details:\n");
            readStudent(&s);

            fseek(fp, -(long)sizeof(struct Student), SEEK_CUR);
            fwrite(&s, sizeof(struct Student), 1, fp);
            found = 1;
            printf("Record updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Record not found.\n");
    }

    fclose(fp);
}

int main() {
    int ch;
    do {
        printf("\n1. Create  2. Append  3. Display  4. Edit  5. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &ch) != 1) {
            break;
        }

        switch (ch) {
            case 1:
                addRecord("wb");
                break;
            case 2:
                addRecord("ab");
                break;
            case 3:
                display();
                break;
            case 4:
                edit();
                break;
            case 5:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 5);

    printf("Name - Aadit Gupta\nRoll Number - 56\n");
    return 0;
}
