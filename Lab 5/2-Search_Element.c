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

void searchElement(struct Node *head, int key)
{
    int pos = 1;
    while (head != NULL)
    {
        if (head->data == key)
        {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        head = head->next;
        pos++;
    }
    printf("Element %d not found.\n", key);
}

int main()
{
    int n, key;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct Node *head = createList(n);

    printf("Enter element to search: ");
    scanf("%d", &key);

    searchElement(head, key);

    return 0;
}
