#include "headerA3.h"
#include <stdio.h>
#include <stdlib.h>

void loadTweetsFromFile(tweet ** tweetList) {

	FILE * fp;

	char * fileName = malloc(sizeof(char) * 100);

	char cr;

	int count = 0;

	char * info;

	printf("Enter a filename to load from: ");

	scanf("%s", fileName); // asking user for filename

	fp = fopen(fileName,"r"); // opening file in read mode

	if(fp == NULL) {

		printf("No such file exists\n\n"); // if file not found then indicate this message

	}

	else {

		cr = fgetc(fp);

		while(cr != EOF) {

			cr = fgetc(fp);

			if(cr == '\n') {

				count = count + 1; // coutning number of tweets in file

			}

		}

		rewind(fp);

		char ** textLines = malloc(sizeof(char*) * count); // dynamically making strings for each tweets

		for(int i = 0; i < count; ++i) {

			textLines[i] = malloc(sizeof(char) * 300);

		}

		for(int i = 0; i < count; ++i) {


			fgets(textLines[i], 300, fp); // storing each line in a separate string


		}



		for(int i = 0; i < count; ++i) {

			tweet * headNode = malloc(sizeof(tweet));

			info = strtok(textLines[i], ","); // using strtok to find separate and find userID in file

			headNode->id = atoi(info); // assigning userID

			info = strtok(NULL, ","); // using strtok to find separate and find username in file

			strcpy(headNode->user, info); // assigning username

			info = strtok(NULL, "\0"); // using strtok to find separate and find tweet in file

			strcpy(headNode->text, info); // assigning user text

			addNodeToList(tweetList, headNode); // adding new node to the linked list


		}

		printf("Tweets imported!\n");

	}

}

