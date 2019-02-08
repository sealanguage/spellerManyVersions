#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    // link to the next item
    struct Node *next;     // Node here completes the struct Node
} Node;       //  use Node to complete the typedef Node

int main(void)
{
    // this is making a
    printf("hello\n");

    // keep tract of the head of the Node
    struct Node* head = NULL;      //  pointer to a node
    struct Node* second = NULL;     //  pointer to a node
    struct Node* third = NULL;     //  pointer to a node

    head = (struct Node*)malloc(sizeof(struct Node));   //  struct Node* is pointer to memory of Node
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //  give head data and have it point to the next node in the linked list
    head->data = 5;
    head->next = second;
    second->data = 9;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    //  another way to do the same thing as above
    // head->next->data = 7;
    // head->next->next = third;
    // head->next->next->data = 0;
    // head->next->mext->next = NULL;
}

// writing a function to dynamically add data to the linked list
// creating the box
void addNode(int data, struct Node* head)
{
    struct Node* trav = head;

    // go to the end of the list
    while(trav->next != NULL)
    {
        trav = trav->next;
    }
    // // pointing to the new box created above
    // trav->next = (struct Node*)malloc(sizeof (struct Node)
    // trav->next->data = data;
    // rav->next->next = NULL;

    // alternate way to do above
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data
    newNode->next = NULL;
    trav->next = newNode;
    // at end of list, create a new npde
}
int pop(struct Node* head)
{
    // create the traveller
    struct Node* trav = head;
    // int counter = 0;

    // find the second to last node
    while(trav->next=>next-> != NULL)
    {
        // printf("%i", counter++);
        trav = trav->next;
    }
    // store the data from the last item in the list
    int data = trav->next->data;
    // free the last block of memory
    free(trav->next);
    // set the new last node to NULL
    trav->next = NULL;
    return data;

}

// go to last item, looks at last number and returns it
int peek(struct Node* head)
{
    struct Node* trav = head;

    //  as long as the next pointer is not null
    while(trav->next != NULL)
    {
        // travel down the list
        trav = trav->next;
    }
    // gather the data at the last node
    int data = trav->data;
    // return that data
    return data;
}



// mine
// int pop(struct Node* head)
// {
//     // get the data
//     int that_num = trav->next->data;
//     // have travellet point to 2nd to last item in the list
//     trav->newNode - 1;
//     // free the last node
//     free(newNode);
//     // point the last node to null
//     trav->next = NULL;
//     return that_num;
// }