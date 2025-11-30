#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Node structure
struct Node
{
    int data;
    struct Node *left, *right;
};

// Queue structure for level-order building
struct Queue
{
    struct Node *arr[1000];
    int front, rear;
};

// Queue functions
void initQueue(struct Queue *q)
{
    q->front = q->rear = -1;
}

int isEmpty(struct Queue *q)
{
    return (q->front == -1);
}

void enqueue(struct Queue *q, struct Node *node)
{
    if (q->rear == 999)
        return;
    if (isEmpty(q))
    {
        q->front = q->rear = 0;
    }
    else
    {
        q->rear++;
    }
    q->arr[q->rear] = node;
}

struct Node *dequeue(struct Queue *q)
{
    if (isEmpty(q))
        return NULL;
    struct Node *temp = q->arr[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return temp;
}

// Create a new tree node
struct Node *createNode(int value)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

// Build tree from level-order input
struct Node *buildTree(int arr[], int n)
{
    if (n == 0 || arr[0] == -1)
        return NULL;

    struct Node *root = createNode(arr[0]);
    struct Queue q;
    initQueue(&q);
    enqueue(&q, root);

    int i = 1;
    while (!isEmpty(&q) && i < n)
    {
        struct Node *curr = dequeue(&q);

        // Left child
        if (arr[i] != -1)
        {
            curr->left = createNode(arr[i]);
            enqueue(&q, curr->left);
        }
        i++;

        // Right child
        if (i < n && arr[i] != -1)
        {
            curr->right = createNode(arr[i]);
            enqueue(&q, curr->right);
        }
        i++;
    }
    return root;
}

// Height of tree
int height(struct Node *root)
{
    if (root == NULL)
        return -1; // edge-based height definition
    int leftH = height(root->left);
    int rightH = height(root->right);
    return (leftH > rightH ? leftH : rightH) + 1;
}

// Count leaf nodes
int countLeaves(struct Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}

// Min-Max BST Validator
int isBSTUtil(struct Node *root, int min, int max)
{
    if (root == NULL)
        return 1;

    // Check current node value is within permitted range
    if (root->data <= min || root->data >= max)
        return 0;

    // Check subtrees with updated ranges
    return isBSTUtil(root->left, min, root->data) && isBSTUtil(root->right, root->data, max);
}

// Wrapper function
int isBST(struct Node *root)
{
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

// Level-order Traversal
void levelOrder(struct Node *root)
{
    if (root == NULL)
        return;

    struct Queue q;
    initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q))
    {
        struct Node *curr = dequeue(&q);
        printf("%d ", curr->data);

        if (curr->left != NULL)
            enqueue(&q, curr->left);

        if (curr->right != NULL)
            enqueue(&q, curr->right);
    }
}

// Traversals
void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// Main function
int main()
{
    int arr[1000], n = 0, x;
    printf("Enter values in level order (use -1 for NULL, -2 to stop):\n");

    while (1)
    {
        scanf("%d", &x);
        if (x == -2)
            break;
        arr[n++] = x;
    }

    struct Node *root = buildTree(arr, n);

    printf("\nLevel-order traversal of the constructed tree: ");
    levelOrder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal : ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    printf("\n\nHeight of Tree      = %d", height(root));
    printf(" \nTotal Leaf Nodes    = %d\n", countLeaves(root));

    if (isBST(root))
        printf("BST Check: Tree is a BST\n");
    else
        printf("BST Check: Tree is NOT a BST\n");

    return 0;
}
