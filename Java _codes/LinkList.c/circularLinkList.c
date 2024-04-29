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

    if (head == NULL)
    {
        head = node;
        tail = node;
        tail->next = head;
    }
    else
    {
        node->next = head;
        head = node;
        tail->next = head;
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
        tail->next = head;
    }
    else
    {
        tail->next = node;
        tail = node;
        tail->next = head;
    }
}

void addAfter(int data, int n)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    struct Node *curr = head;

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

void deleteAtStart()
{
    // head = head->next;
    // struct Node *curr;
    // struct Node *prev;
    // while (curr != NULL)
    // {
    //     if (curr == tail)
    //     {
    //         prev->next = head;
    //         tail = prev;
    //     }
    //     else
    //     {
    //         prev = curr;
    //         curr = curr->next;
    //     }
    // }


    if(head==tail)
    {
            
        head=NULL;
        tail=NULL;

        printf("List is empty \n");
        return;
    }

    tail->next=head->next;
    head=head->next;

}

void print()
{
    struct Node *curr = head;

    if(head==NULL)
    {
        return;
    }
    do
    {
        printf("%d->", curr->data);
        curr = curr->next;

    } while (curr != head);
}

// void deleteAtEnd()
// {
//     struct Node *curr;
//     struct Node *prev;
//     if (head == NULL)
//     {
//         printf("LIMKED lIST IS EMPTY");
//         return;
//     }
//     if (head->next == NULL)
//     {
//         head = NULL;
//         tail = head;
//         return;
//     }
//     prev = head;
//     curr = head;

//     while (curr != NULL)
//     {
//         if (curr == tail)
//         {
//             prev->next = NULL;
//             tail = prev;
//         }
//         else
//         {
//             prev = curr;
//             curr = curr->next;
//         }
//     }
// }

int main()
{

    addToStart(3);
    addToStart(5);
    addToStart(4);
    print();
    printf("\n");

    printf("adding at end\n");
    addToEnd(6);
    addToEnd(7);
    addToEnd(9);
    print();
    printf("\n");

    printf("Adding 1000 after 5 \n");
    addAfter(1000, 5);
    print();
    printf("\n");

    printf(" delete at start \n");
    deleteAtStart();
    print();
    printf("\n");

    printf(" delete at start \n");
    deleteAtStart();
    print();
    printf("\n");

    printf(" delete at start \n");
    deleteAtStart();
       deleteAtStart();
       
    print();
    printf("\n");

    return 0;
}