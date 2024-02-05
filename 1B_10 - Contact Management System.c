#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    long ph;
    char name[20], add[20], email[30];

} list;

char query[20], name[20];

FILE *fp, *ft;

int i, ch, l, found;

void displayMenu() {
   textcolor(MAGENTA);
    printf("\n\t **** Welcome to Contact Management System ****");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[0] Exit\n\t\t=================\n\t\t");
    printf("Enter the choice:");
}

void addContact() {
    fp = fopen("contact.data", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (1) {
        fflush(stdin);

        printf("To exit, enter a blank space in the name input.\nName (Use identical): ");
        scanf("%[^\n]", list.name);

        if (strcmp(list.name, "") == 0 || strcmp(list.name, " ") == 0)
            break;

        fflush(stdin);

        printf("Phone: ");
        scanf("%ld", &list.ph);

        fflush(stdin);

        printf("Address: ");
        scanf("%[^\n]", list.add);

        fflush(stdin);

        printf("Email address: ");
        fgets(list.email, sizeof(list.email), stdin);

        printf("\n");

        fwrite(&list, sizeof(list), 1, fp);
    }

    fclose(fp);
}

void listContacts() {
    // Your existing listing code remains unchanged
}

void searchContacts() {
    // Your existing search code remains unchanged
}

void editContact() {
    // Your existing edit code remains unchanged
}

void deleteContact() {
    // Your existing delete code remains unchanged
}

int main() {
    do {
        displayMenu();
        scanf("%d", &ch);

        switch (ch) {
            case 0:
                printf("\n\n\t\tAre you sure you want to exit?");
                break;

            case 1:
                addContact();
                break;

            case 2:
                listContacts();
                break;

            case 3:
                searchContacts();
                break;
            case 4:
                editContact();
                break;

            case 5:
                deleteContact();
                break;

            default:
                printf("Invalid choice");
                break;
        }

        if (ch != 0) {
            printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");
            scanf("%d", &ch);
        }

    } while (ch == 1);

    return 0;
}