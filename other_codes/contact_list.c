#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT  1
#define ADD    2
#define MODIFY 3
#define DELETE 4
#define SEARCH 5
#define QUIT   6

typedef struct Contact{
    char name[20];
    char number[20];
    char email[50];
    char department[20];
} Contact;

typedef struct Node{
    Contact contact;
    struct Node *next;
} Node;

void print_options();
void print_list(Node *list);
void insert(Node **list, Node *node);
void modify(Node **list, char *number);
void erase(Node **list, char *number);
void search(Node *list, char *keyword);
void clear(Node *list);
_Bool exist(Node *list, char *number);
_Bool is_substr(char *dest, char *src);
int check_number(char *number);
int check_email(char *email);
Node* search_by_number(Node *list, char *number);

int main(){
    int option;
    Node *list = NULL; // contacts list

    while(1){
        print_options();

        scanf("%d", &option);

        if(option == PRINT) print_list(list);
        else if(option == ADD){
            char name[20];
            char number[20];
            char email[50];
            char department[20];

            printf("Name: ");
            scanf("%s", name);

            printf("Number: ");
            scanf("%s", number);

            printf("Email: ");
            scanf("%s", email);

            printf("Department: ");
            scanf("%s", department);

            if((check_number(number) == 0) && exist(list, number)){
                printf("Entry already exists, ignoring duplicate entry.");
            }
            else{
                Node *new_node = (Node*)malloc(sizeof(Node));

                strcpy(new_node->contact.name, name);
                strcpy(new_node->contact.number, number);
                strcpy(new_node->contact.email, email);
                strcpy(new_node->contact.department, department);

                insert(&list, new_node);
            }
        }
        else if(option == MODIFY){
            char number[20];

            printf("Enter a number to modify: ");
            scanf("%s", number);

            modify(&list, number);
        }
        else if(option == DELETE){
            char number[20];

            printf("Enter phone number to delete (return to cancel): ");
            scanf("%s", number);

            if(strlen(number)) erase(&list, number);
        }
        else if(option == SEARCH){
            char keyword[50];

            search(list, keyword);
        }
        else if(option == QUIT){
            clear(list);
            list = NULL;
            break;
        }
        else printf("Unknown option!\n");
    }

    return 0;
}

void print_options(){
    printf("1) Print contact list\n");
    printf("2) Add a contact\n");
    printf("3) Modify a contact\n");
    printf("4) Delete a contact\n");
    printf("5) Search\n");
    printf("6) Quit\n");
    printf("Option: ");
}

void print_list(Node *list){
    for(Node *curr = list; curr != NULL; curr = curr->next){
        printf(
            "%s\t%s\t%s (%s)\n",
            curr->contact.number,
            curr->contact.email,
            curr->contact.name,
            curr->contact.department
        );
    }
}

void insert(Node **list, Node *node){
    if(*list){
        Node *curr = *list;

        for(; curr->next != NULL; curr = curr->next);

        curr->next = node;
    }
    else{
        *list = node;
    }
}

void modify(Node **list, char *number){
    Node *target = search_by_number(*list, number);

    if(target){
        char name[20];
        char email[50];
        char department[20];

        printf("Enter new name (return to keep [%s])",
               target->contact.name);
        scanf("%s", name);

        printf("Enter new email (return to keep [%s])",
               target->contact.email);
        scanf("%s", email);

        printf("Enter new department (return to keep [%s])",
               target->contact.department);
        scanf("%s", department);

        if(strlen(name)) strcpy(target->contact.name, name);

        if(strlen(email)) strcpy(target->contact.email, email);

        if(strlen(department)) strcpy(target->contact.department, department);
    }
    else printf("Entry does not exist.\n");
}

void erase(Node **list, char *number){
    if(*list == NULL) return;
    else if(strcmp((*list)->contact.number, number) == 0){
        Node *temp = *list;

        *list = (*list)->next;

        free(temp);
    }
    else{
        for(Node *curr = *list; curr->next != NULL; curr = curr->next){
            if(strcmp(curr->next->contact.number, number) == 0){
                Node *temp = curr->next;

                curr->next = curr->next->next;

                free(temp);
            }
        }
    }
}

void search(Node *list, char *keyword){
    for(Node *curr = list; curr != NULL; curr = curr->next){
        if(is_substr(curr->contact.name, keyword) ||
           is_substr(curr->contact.number, keyword) ||
           is_substr(curr->contact.email, keyword) ||
           is_substr(curr->contact.department, keyword)){
            printf(
            "%s\t%s\t%s (%s)\n",
            curr->contact.number,
            curr->contact.email,
            curr->contact.name,
            curr->contact.department
            );
        }
    }
}

void clear(Node *list){
    Node *curr = list;

    while(curr != NULL){
        Node *temp = curr;

        curr = curr->next;

        free(temp);
    }
}

_Bool exist(Node *list, char *number){
    for(Node *curr = list; curr != NULL; curr = curr->next){
        if(strcmp(curr->contact.number, number) == 0){
            return 1;
        }
    }

    return 0;
}

_Bool is_substr(char *dest, char *src){
    char *c1 = dest;
    char *c2 = src;

    for(; *c1 != '\0'; c1++){
        if(*c2 == '\0') return 1;
        else if(*c1 == *c2) c2++;
        else if(*c1 != *c2) c2 = src;
    }

    if(*c2 != '\0') return 0; // not substring
    else return 1; // is substring
}

int check_number(char *number){
    if(strlen(number) == 0){
        printf("Phone number cannot be empty, ignoring entry.\n");

        return -1; // empty string
    }

    _Bool contain_one_digit = 0;

    for(char *curr = number; *curr != '\0'; curr++){
        switch(*curr){
            case '0' ... '9':
                contain_one_digit = 1;
                break;

            case '+':
            case '-':
            case '(':
            case ')':
                break;

            default:
                printf("Invalid phone number.\n");
                return -2; // invalid character
        }
    }

    if(!contain_one_digit){
        printf("Invalid phone number.\n");
        return -3; // no digit in this number
    }

    return 0; // valid phone number
}

int check_email(char *email){
    if(strlen(email) == 0) return 0; // valid email

    /*
        unfinished
    */

    return 0; // valid email
}

Node* search_by_number(Node *list, char *number){
    for(Node *curr = list; curr != NULL; curr = curr->next){
        if(strcmp(curr->contact.number, number) == 0){
            return curr;
        }
    }

    return NULL;
}
