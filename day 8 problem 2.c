#include <stdio.h>
#include <stdlib.h>

struct Node {
    int roll;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;
    int n, i, num;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->roll = num;
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
        printf("ROLL %d -> ", temp->roll);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}