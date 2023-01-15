#include "headerA3.h"

void addNodeToList(tweet**tweetList,tweet * node)
{
    tweet * headNode;

    if(*tweetList == NULL)
    {

        *tweetList = node; // adding node at the start if linked list is empty

    }
    else
    {
        headNode = *tweetList;

        while(headNode->next != NULL)
        {
            headNode = headNode->next; // traversing until we reach end of linked list
        }
        headNode->next = node; // attaching the new node at the end of linked list
    }
}
