#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    // Print linked list
    printf("First node data: %d\n", head->data);
    printf("Second node data: %d\n", head->next->data);

    // Free memory
    free(head);
    free(second);

    return 0;
}
