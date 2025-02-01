#include <stdio.h>
#include <math.h>

// Add support for "log, sqrt, root maybe"
static const int operators[256] = {
    ['+'] = 1, ['-'] = 1, ['*'] = 1, ['/'] = 1,
    ['%'] = 1, ['^'] = 1
};

typedef struct node {
   char data;
   struct node* next;
} Node;

double eval(char* s) {
    while (*s != '/0') {
        if (*s == ' ') { continue; }

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

int main() {
    return 0;
}