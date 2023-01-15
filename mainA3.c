#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerA3.h"

int main() {

	int menuOption = 0;
	tweet *tweetList = NULL;
	tweet *node = NULL;

	tweet ** head;

	do {

	printf("Menu:-\n\n");
	printf("1. Create a new tweet\n");
	printf("2. Display tweets\n");
	printf("3. Search a tweet\n");
	printf("4. Find how many words are “stop words”\n");
	printf("5. Delete the nth tweet\n");
	printf("6. Save tweets to a file\n");
	printf("7. Load tweets from a file\n");
	printf("8. Sort the given linked list on userid.\n");
	printf("9. Exit\n\n");
	printf("Choose a Menu Option: ");
	scanf("%d", &menuOption);
	getchar();
	fflush(stdin);

	switch(menuOption) {

		case 1:

		node = createTweet(tweetList);
		addNodeToList(&tweetList,node);

		break;

		case 2:

		displayTweets(tweetList);

		break;

		case 3:

		searchTweetsByKeyword(tweetList);

		break;

		case 4:

		countStopWords(tweetList);

		break;

		case 5:

		deleteTweet(&tweetList);

		break;

		case 6:

		saveTweetsToFile(tweetList);

		break;

		case 7:

		loadTweetsFromFile(&tweetList);

		break;

		case 8:

		head = &tweetList;
		sortID(head);

		break;

		}

	} while(menuOption != 9);


	free(tweetList);

	return 0;

}
