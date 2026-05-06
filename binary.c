#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int vertex;
    int weight;
    struct Node *next;
} Node;

typedef struct List
{
    Node *head;
} List;


Node *createNode(int vertex, int weight);
void addEdge(List *adj[], int src, int dest, int weight);
void display(List *adj[], int vertices);

int main()
{
    int vertices, weight, choice, src, dest;

    printf("Enter How many Nodes you have: ");
    scanf("%d", &vertices);

    List *adj[vertices];

    for (int i = 0; i < vertices; i++)
    {
        adj[i] = (List *)malloc(sizeof(List));
        adj[i]->head = NULL;
    }

    do
    {
        printf("\n-------MENU-------\n");
        printf("1. Add Edge\n2. Display\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter source, destination and weight: ");
            scanf("%d %d %d", &src, &dest, &weight);
            addEdge(adj, src, dest, weight);
            break;

        case 2:
            display(adj, vertices);
            break;

        case 3:
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}


Node *createNode(int vertex, int weight)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->vertex = vertex;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}


void addEdge(List *adj[], int src, int dest, int weight)
{
    Node *newNode = createNode(dest, weight);

    
    if (adj[src]->head == NULL)
    {
        adj[src]->head = newNode;
    }
    else
    {
        Node *temp = adj[src]->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

  
    newNode = createNode(src, weight);

    
    if (adj[dest]->head == NULL)
    {
        adj[dest]->head = newNode;
    }
    else
    {
        Node *temp = adj[dest]->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void display(List *adj[], int vertices)
{
    for (int i = 0; i < vertices; i++)
    {
        printf("%d -> ", i);
        Node *temp = adj[i]->head;

        while (temp != NULL)
        {
            printf("(%d, w=%d) ", temp->vertex, temp->weight);
            temp = temp->next;
        }
        printf("\n");
    }
}