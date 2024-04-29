#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
struct Node *tail = NULL;

void addAtStart(int data)
{

    struct Node *node = malloc(sizeof(struct Node));

    node->data = data;
    node->next = NULL;
    node->prev = NULL;

    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        node->next = head;
        head->prev = node;
        head = node;
    }
}

void addAtEnd(int data)
{

    struct Node *node = malloc(sizeof(struct Node));

    node->data = data;
    node->next = NULL;
    node->prev = NULL;

    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
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
                addAtEnd(data);
                return;
            }

            node->next = curr->next;
            node->prev = curr;
            curr->next = node;
            node->next->prev = node;
            break;
        }
        else
        {
            curr = curr->next;
        }
        if (curr == NULL)
        {
            printf("Data not found\n");
        }
     }
 }


 void deleteAtStart(){
    if(head==tail)
    {
            
        head=NULL;
        tail=NULL;

        printf("List is empty \n");
        return;
    }

    head = head->next;
    head->prev = NULL;

 }

 void deleteAtEnd(){
    if(head==tail)
    {
            
        head=NULL;
        tail=NULL;

        printf("List is empty \n");
        return;
    }

    tail=tail->prev;
    tail->next=NULL;

 }

 void deleteAfter(int n){
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
            curr->next=curr->next->next;
            curr->next->prev=curr;
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

    void printReverseList()
    {
        if (tail == NULL)
        {
            printf("List is empty");
            return;
        }
        struct Node *curr = tail;
        while (curr != NULL)
        {
            printf("%d->", curr->data);
            curr = curr->prev;
        }
        printf("NULL");
        printf("\n");
    }
    int main()
    {
        addAtStart(3);
        addAtStart(5);
        addAtStart(67);
        addAtStart(40);
        // addAtStart(30);
        // addAtStart(47);
        // print();
        // printReverseList();

        // addAtEnd(8);
        // addAtEnd(9);
        // addAtEnd(100);
        // addAfter(122, 5);
        // print();
        // printReverseList();
        // deleteAtStart();

        // print();
        // deleteAtStart();

        // print();
        // deleteAtEnd();
        // print();
        
        deleteAfter(5);
        print();
        
        

        return 0;
    }