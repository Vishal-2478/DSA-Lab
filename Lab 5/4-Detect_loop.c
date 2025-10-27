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

int detectLoop(struct Node *head)
{
    struct Node *slow = head, *fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1; // loop found
    }
    return 0; // no loop
}

int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct Node *head = createList(n);

    // For testing, we can create a loop manually:
    // Uncomment below lines:
    // head->next->next->next = head->next;

    if (detectLoop(head))
        printf("Loop detected in linked list!\n");
    else
        printf("No loop detected.\n");

    return 0;
}
