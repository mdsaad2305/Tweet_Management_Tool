#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "headerA3.h"

void deleteTweet(tweet ** tweetList) {

	tweet * countNode = *tweetList;
	tweet * headNode = *tweetList;
	tweet * deleteNode = *tweetList;
	int countTweets = 0;
	int userInput = 0;


	if(countNode == NULL) {

		printf("no tweets to delete\n");

	}

	else {

		while(countNode != NULL) {

			countTweets = countTweets + 1; // counting number of tweets

			countNode = countNode->next; // traversing linked list

		}


	printf("number of tweets = %d\n", countTweets);

	if(countTweets == 0) {

		printf("No tweet available to delete");

	}

	if(countTweets == 1) {

		printf("only one tweet available to delete, press 1 to delete: ");

	}

	else if(countTweets == 2) {

		printf("which tweet do you wish to delete - enter 1 or 2: ");

	}


	else if(countTweets > 2) {

		printf("Which tweet do you wish to delete – enter a value between %d and %d: ", 1, countTweets);

	}
	scanf("%d", &userInput); // prompting user for input

	if(userInput <= 0) {

		while(userInput <= 0) {

			printf("invalid input\n");

			if(countTweets == 1) {

         		       printf("only one tweet available to delete, press 1 to delete: ");

        		}

			else if(countTweets == 2) {

         		       printf("which tweet do you wish to delete - enter 1 or 2: ");

        		}


			else if(countTweets > 2) {

                		printf("Which tweet do you wish to delete – enter a value between %d and %d: ", 1, countTweets);

        		}

			scanf("%d", &userInput); // prompting user for input

		}

	}

	if(userInput == 1) {

		*tweetList = deleteNode->next; // if user input is 1, delete first tweet

		free(deleteNode);

		printf("Tweet 1 has been deleted, there are now %d tweets left\n", countTweets - 1);

	}


	else if(userInput >= 2) {

		for(int i = 0; i < userInput - 2; ++i) { // delete tweet other than first one

                        headNode = headNode->next;

                }

		deleteNode = headNode->next;

	        headNode->next = deleteNode->next;

	        free(deleteNode);

		printf("Tweet %d has been deleted, there are now %d tweets left\n", userInput, countTweets - 1);

	}

	}

}
