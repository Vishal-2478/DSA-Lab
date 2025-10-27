#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createList(int n)
{
    struct Node *head = NULL, *temp, *newNode;
    int data;
    for (int i = 0; i < n; i++)
    {
        printf("Enter data (in sorted order) for node %d: ", i + 1);
        scanf("%d", &data);
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
        {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    return head;
}

void printList(struct Node *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node *removeDuplicates(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct Node *dup = current->next;
            current->next = dup->next;
            free(dup);
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}

int main()
{
    int n;
    printf("Enter number of nodes (sorted list): ");
    scanf("%d", &n);

    struct Node *head = createList(n);
    printf("Original list:\n");
    printList(head);

    head = removeDuplicates(head);
    printf("\nAfter removing duplicates:\n");
    printList(head);

    return 0;
}
