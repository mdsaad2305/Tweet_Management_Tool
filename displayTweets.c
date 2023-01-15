#include "headerA3.h"

void displayTweets(tweet * tweetList) {

	tweet * headNode = tweetList;

	while(headNode != NULL) {

		printf("%d: ", headNode->id); // printing user ID
		printf("Created by ");

		for(int i = 0; i < strlen(headNode->user) && headNode->user[i] != '\n'; ++i) { // printing username

			printf("%c", headNode->user[i]);

		}

		printf(": ");

		printf("%s", headNode->text); // printing the user Tweet

		headNode = headNode->next; // going to the adrress of next node

	}
}
