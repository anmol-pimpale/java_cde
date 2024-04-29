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
    }
}

void addBefore(int data, int pre)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *curr = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (data == head->data)
    {
        node->data = pre;
        node->next = head;
        head = node;
        return;
    }

    while (curr->next != NULL)
    {
        if (curr->next->data == data)
        {
            node->data = pre;
            node->next = curr->next;
            curr->next = node;
            return;
        }
        curr = curr->next;
    }

    printf("Element not found in the list\n");
}

void addAfter(int data, int n)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    struct Node *curr = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
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

void deleteAtStart()
{
    head = head->next;
    struct Node *curr;
    struct Node *prev;
    while (curr != NULL)
    {
        if (curr == tail)
        {
            prev->next = NULL;
            tail = prev;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

void deleteAtEnd()
{
    struct Node *curr;
    struct Node *prev;
    if (head == NULL)
    {
        printf("LIMKED lIST IS EMPTY");
        return;
    }
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    prev = head;
    curr = head;

    while (curr != NULL)
    {
        if (curr == tail)
        {
            prev->next = NULL;
            tail = prev;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

void deleteAfter(int n)
{

    struct Node *curr = NULL;

    if (head == NULL)
    {
        printf("Link list is empty");
        return;
    }

    curr = head;
    while (curr != NULL)
    {

        if (curr->data == n)
        {
            curr->next = curr->next->next;
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

    addToEnd(8);
    print();
    printf("\n");

    addToEnd(9);
    print();
    printf("\n");

    addToEnd(10);
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
                addAfter(1000, 5);
                print();
                printf("\n");

                printf("Adding 100 before 5 \n");
                addBefore(100, 6);
                print();
                printf("\n");

        printf("Delete head at Start Position\n");
        deleteAtStart();
        print();
        printf("\n");

        printf("Delete head at end Position\n");
        deleteAtEnd();
        print();
        printf("\n");
    
    printf("Delete After\n");
    deleteAfter(9);
    print();
    printf("\n");

    return 0;
}