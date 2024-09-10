#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct ToDo {
    char data[100];
    struct ToDo *link;
    int count;
} todo;

todo *start = NULL;

void welcomeUser() {
    system("color 4F");
    printf("\n\n\n\n\n");
    printf("\t------------------------------------------------------------------------------------------------------\n\n");
    printf("\t#################################### YOUR TODO LIST APP ##############################################\n\n");
    printf("\t------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t*******************************WELCOME*******************************\n\n\n\n\n\n\n\n\n\t");
    system("pause");
}

void seeToDo() {
    system("cls");
    todo *temp = start;
    if (start == NULL) {
        printf("\nEmpty TODO\n\n");
    } else {
        while (temp != NULL) {
            printf("%d: ", temp->count);
            puts(temp->data);
            temp = temp->link;
        }
    }
    printf("\n\n\n");
    system("pause");
}

void fixCount() {
    todo *temp = start;
    int i = 1;
    while (temp != NULL) {
        temp->count = i;
        i++;
        temp = temp->link;
    }
}

void createToDo() {
    char k;
    todo *t, *temp;
    system("cls");
    while (1) {
        printf("\n Want to add? y/n ");
        fflush(stdin);
        scanf("%c", &k);
        if (k == 'n') {
            break;
        } else {
            if (start == NULL) {
                t = (todo*)malloc(sizeof(todo));
                start = t;
                printf("\nAdd it...\n");
                fflush(stdin);
                fgets(t->data, 100, stdin);
                t->count = 1; 
                start->link = NULL;
            } else {
                temp = (todo*)malloc(sizeof(todo));
                printf("\nAdd it...\n");
                fflush(stdin);
                fgets(temp->data, 100, stdin);
                temp->link = NULL;
                t->link = temp;
                t = t->link;
            }
            fixCount();
        }
    }
}

void deleteToDo() {
    system("cls");
    int d;
    todo *temp1, *temp;
    printf("\n Enter the no of the todo you want to remove\n");
    scanf("%d", &d);
    temp1 = start;

    if (temp1 != NULL && temp1->count == d) {
        start = start->link;
        free(temp1);
        fixCount();
    } else {
        while (temp1 != NULL && temp1->link != NULL) {
            temp = temp1->link;
            if (temp->count == d) {
                temp1->link = temp->link;
                free(temp);
                fixCount();
                break;
            }
            temp1 = temp1->link;
        }
    }
    system("pause");
}

void updateToDo() {
    system("cls");
    todo *temp, *t;
    char k;
    while (1) {
        printf("\nWant to add? y/n ");
        fflush(stdin);
        scanf(" %c", &k);
        if (k == 'n')
            break;
        printf("\nADD it..\n");
        temp = (todo *)malloc(sizeof(todo));
        fflush(stdin);
        fgets(temp->data, 100, stdin);
        temp->link = NULL;
        t = start;
        while (t->link != NULL) {
            t = t->link;
        }
        t->link = temp;
        fixCount();
    }
    printf("\n\n");
    system("pause");
}

int main() {
    int choice;
    welcomeUser();
    while (1) {
        system("color 3F");
        system("cls");
        printf("\n1. See Your ToDo List");
        printf("\n2. Create Your ToDos");
        printf("\n3. Delete Your ToDos");
        printf("\n4. Update Your ToDos");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                seeToDo();
                break;
            case 2:
                createToDo();
                break;
            case 3:
                deleteToDo();
                break;
            case 4:
                updateToDo();
                break;
            case 5:
                exit(0);
        }
    }
}
