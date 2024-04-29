#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addToStart(int data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
}

void addToEnd(int data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail->next = node;
        tail = tail->next;
        // tail = node;
    }
}

void addBefore(int data){
    
}

void addAfter(int data, int n)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data=data;

    struct Node *curr=head;

    if (head == NULL)
    {
        printf("Link is empty");
    }


    while (curr != NULL)
    {
        if (curr->data == n)
        {
            if (curr == tail)
            {
                addToEnd(data);
                return;
            }

            node->next = curr->next;
            curr->next = node;
            break;
        }
        else
        {
            curr = curr->next;
        }
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
    addToStart(4);
    addToEnd(5);
    print();
    printf("\n");

    printf("Adding at end \n");
    addToEnd(6);
    print();
    printf("\n");

    printf("Adding at end \n");
    addToEnd(7);
    print();
    printf("\n");

    printf("Adding at start \n");
    addToStart(3);
    print();
    printf("\n");

    printf("Adding at start \n");
    addToStart(2);
    print();
    printf("\n");


 printf("Adding 1000 after 5 \n");
    addAfter(1000,5);
    print();
    printf("\n");


    return 0;
}