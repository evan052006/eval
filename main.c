#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Add support for "log, sqrt, root maybe"
static const int operators[256] = {
    ['+'] = 1, ['-'] = 1, ['*'] = 1, ['/'] = 1,
    ['%'] = 1, ['^'] = 1
};

typedef struct node {
   char data;
   struct node* next;
} node;

double eval(char* s) {
    while (*s != '/0') {
        if (*s == ' ') continue;

        if ('0' <= *s <= '9') {

        }

        if (operators[*s]) {

        }

        if (*s == '(') {

        }

        if (*s == ')') {
            
        }

        s++;
    }
}

node *createNode(char data) {
    node *listNode = malloc(sizeof(node));

    if (listNode == NULL)
    {
        return NULL;
    }

    listNode->data = data;
    listNode->next = NULL;

    return listNode;
}

void freeNode(node* head) {
    while (head != NULL)
    {
        node *next = head->next;
        free(head);
        head = next;
    }
} 

int main() {
    char *equation = "Hello";
    node *list = NULL;

    for (int i = 0; i < 5; i++)
    {
        node *temp = createNode(equation[i]);

        temp->next = list;
        list = temp;
    }

    node *copy = list;
    while (copy != NULL)
    {
        printf("%c", copy->data);
        copy = copy->next;
    }
    printf("\n");


    freeNode(list);
    return 0;
}