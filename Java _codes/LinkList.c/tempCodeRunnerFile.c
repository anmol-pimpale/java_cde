void deleteAtEnd()
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