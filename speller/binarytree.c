#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    // link to the next item
    struct Node *next;     // Node here completes the struct Node
} Node;       //  use Node to complete the typedef Node


void push(int, struct Nonde*);
int pop(struct Node*);
int peek(struct Node*);

int main(void)
{
    // this is making a
    printf("hello\n");

    // keep tract of the head of the Node
    struct Node* head = NULL;      //  creating pointer to a node
    struct Node* second = NULL;     //  creating pointer to a node
    struct Node* third = NULL;     //  creating pointer to a node

    head = (struct Node*)malloc(sizeof(struct Node));   //  struct Node* is pointer to memory of Node
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));




}

// writing a function to dynamically add data to the linked list
// creating the box
void push(int data, struct Node* head)
{


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



