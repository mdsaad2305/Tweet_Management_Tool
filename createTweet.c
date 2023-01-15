#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headerA3.h"

tweet * createTweet( tweet * tweetList) {

	int userID = 0;
	tweet * searchID;
	tweet * creation;

	searchID = malloc(sizeof(tweet));
	creation = malloc(sizeof(tweet));

	printf("Enter a username: ");
	fgets(creation->user, sizeof(creation->user), stdin); // asking user for username

	while(strlen(creation->user) < 2 || strlen(creation->user) > 51) { // prompting user if input is invalid

	printf("invalid input\n");
	printf("please Enter a username more than 0 characters and not exceeding 51 characters: ");
	fgets(creation->user, sizeof(creation->user), stdin);

	}


	printf("Enter the user's tweet: ");
	fgets(creation->text, sizeof(creation->text), stdin); // asking user for tweet

	while(strlen(creation->text) < 2 || strlen(creation->text) > 141) { // prompting user if input is invalid

        printf("invalid input\n");
        printf("please Enter a tweet more than 0 characters and not exceeding 141 characters: ");
        fgets(creation->text, sizeof(creation->text), stdin);

        }



	for(int i = 0; i < strlen(creation->user) && creation->user[i] != '\n'; ++i) {

		userID = userID + (int)creation->user[i]; // adding ascii value of all characters in username

	}

	for(int i = 0; i < strlen(creation->text) && creation->text[i] != '\n'; ++i) {

                userID = userID + 1; // adding length of tweet

        }

	creation->id = userID;

	if(tweetList != NULL) { // to ensure the IDs are unique

		searchID = tweetList;

		while(searchID != NULL) {

			if(searchID->id == creation->id) {

				creation->id = creation->id + rand() %999 + 1;

			}

		searchID = searchID->next;

		}

	}

	printf("Your computer generated user ID is %d\n", creation->id);

	return creation;

}


