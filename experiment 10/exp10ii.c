#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *create(int x);

struct Node *insert(struct Node *head, int x) {
    if (head == NULL) {
        return create(x);
    }

    struct Node *new = create(x);
    struct Node *current= head;
    int l = 0;

    while (current != NULL) {
        l++;
        current = current->next;
    }
  
    int mid = (l % 2 == 0) ? l / 2 : (l + 1) / 2;
    current = head;

    while (mid > 1) {
        current = current ->next;
      	mid--;
    }

    new->next = current->next;
    current->next = new;

    return head;
}

void print(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node* create(int x) {
    struct Node* new = 
      (struct Node*)malloc(sizeof(struct Node));
    new->data = x;
    new->next = NULL;
    return new;
}
int main() {
    struct Node *head = create(1);
    head->next = creat(2);
    head->next->next = create(4);
    head->next->next->next = create(5);

    int x = 3;
    head = insert(head, x);
    printf(head);

    return 0;
}