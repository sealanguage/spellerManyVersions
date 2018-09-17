// Implements a dictionary's functionality
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "dictionary.h"

typedef struct node
{
    bool is_word;
    struct node *children[27];
}
node;
node *root;


int wordcount = 0;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    word = "hello";
    printf("word %s\n", word);
    return false;

    node *cursor = head;
    while (cursor != NULL)
    {
        do something;
        cursor = cursor -> next;
    }


}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // TODO
    // malloc space for sizeof(dictionary)

    printf("dictionary %s\n", dictionary);
    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO

    return wordcount;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO

    node *cursor = head;
    while(cursor = NULL)
    {
        node *temp = cursor;
        cursor = cursor -> next;
        free(temp);
    }
    return false;
}
