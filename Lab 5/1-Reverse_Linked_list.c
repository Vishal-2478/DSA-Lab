#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createList(int n)
{
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
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
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node *reverseIterative(struct Node *head)
{
    struct Node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

struct Node *reverseRecursive(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    struct Node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct Node *head = createList(n);

    printf("\nOriginal List:\n");
    printList(head);

    head = reverseIterative(head);
    printf("\nReversed (Iterative):\n");
    printList(head);

    head = reverseRecursive(head);
    printf("\nReversed (Recursive):\n");
    printList(head);

    return 0;
}
