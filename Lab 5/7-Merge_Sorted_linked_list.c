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

struct Node *mergeSortedLists(struct Node *l1, struct Node *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    struct Node *result = NULL;

    if (l1->data <= l2->data)
    {
        result = l1;
        result->next = mergeSortedLists(l1->next, l2);
    }
    else
    {
        result = l2;
        result->next = mergeSortedLists(l1, l2->next);
    }

    return result;
}

int main()
{
    int n1, n2;
    printf("Enter number of nodes for first sorted list: ");
    scanf("%d", &n1);
    struct Node *head1 = createList(n1);

    printf("\nEnter number of nodes for second sorted list: ");
    scanf("%d", &n2);
    struct Node *head2 = createList(n2);

    printf("\nFirst list: ");
    printList(head1);
    printf("Second list: ");
    printList(head2);

    struct Node *merged = mergeSortedLists(head1, head2);
    printf("\nMerged Sorted List: ");
    printList(merged);

    return 0;
}
