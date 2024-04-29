#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void add(int data)
{

    struct Node *node = malloc(sizeof(struct Node));

    node->data = data;
    if (head == NULL)
    {
        head = node;
        tail = node;
        node->next = NULL;
    }
    else
    {

        node->next = head;
        head = node;
    }
}

void print()
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main()
{

    add(1);
    add(2);
    add(3);
    add(4);
    print();

    return 0;
}