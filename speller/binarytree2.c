#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct listNode
{
    int data;
    // link to the next item
    struct listNode *next;     // Node here completes the struct Node
} listNode;       //  use Node to complete the typedef Node


//  challenge create a binary Node Struct
typedef struct BinaryNode
{
    int data;
    struct BinaryNode *smaller;
    struct BinaryNode *larger;
} BinaryNode;

// common syntax at the top of a binary tree
BinaryNode* root = NULL;
void add(int);
int seek(int);  //  true 1 of flase 0 if item exists in tree

void testTree()
{
    add(5);
    assert(seek(5) == 1 && "tree contains the number 5");  //modify the true to use seek
    add(3);
    add(4);
    assert(seek(9) == 0 && "tree does not contain 9");
}


int main(void)
{
    // this is making a
    printf("hello\n");
    int data[] = {5, 8, 2, 9, 4, 1, 3};
    testTree();

}



void add(int data)
{
    // creates the node
    BinaryNode* newNode = malloc(sizeof(BinaryNode));
    // set the content to null
    newNode->data = data;
    newNode->smaller = NULL;
    newNode->larger = NULL;
    printf("%i\n", data);

    //
    if (root == NULL)
    {
        // create the root of the new node
        root = newNode;
        return;
    }
    //
    while(true)
    {
        // get add working
        printf("%i\n", data);
        return;
    }
}

int seek(int data)
{
    printf("%i\n", data);
    return 0;
}
