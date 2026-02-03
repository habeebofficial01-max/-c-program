
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;
    int i, num;

    for (i = 0; i < 3; i++) {
        scanf("%d", &num);

        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = num;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}