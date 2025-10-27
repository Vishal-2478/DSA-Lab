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
        printf("Enter data for node %d: ", i + 1);
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
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node *deleteFromBeginning(struct Node *head)
{
    if (head == NULL)
    {
        printf("List empty.\n");
        return NULL;
    }
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node *deleteFromEnd(struct Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    return head;
}

struct Node *deleteFromPosition(struct Node *head, int pos)
{
    if (head == NULL || pos < 1)
        return head;

    if (pos == 1)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
    {
        printf("Invalid position!\n");
        return head;
    }

    struct Node *del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct Node *head = createList(n);
    printf("Original list:\n");
    printList(head);

    head = deleteFromBeginning(head);
    printf("\nAfter deleting from beginning:\n");
    printList(head);

    head = deleteFromEnd(head);
    printf("\nAfter deleting from end:\n");
    printList(head);

    head = deleteFromPosition(head, 2);
    printf("\nAfter deleting from position 2:\n");
    printList(head);

    return 0;
}
