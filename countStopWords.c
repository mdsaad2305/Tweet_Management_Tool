#include "headerA3.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void countStopWords(tweet * tweetList) {

	char ** stopWords = malloc(sizeof(char*) * 25);
	tweet * headNode = tweetList;
	int * stopWordLen = malloc(sizeof(int) * 25);
	int countWord = 0;
	int j = 0;
	int k = 0;
	int countTweets = 0;


	for(int i = 0; i < 25; ++i) {

		stopWords[i] = malloc(sizeof(char) * 5); // making char array of size 5 for all stop words

	}

	stopWords[0] = "a";
	stopWords[1] = "an";
	stopWords[2] = "and";
	stopWords[3] = "are";
	stopWords[4] = "as";
	stopWords[5] = "at";
	stopWords[6] = "be";
	stopWords[7] = "by";
	stopWords[8] = "for";
	stopWords[9] = "from";
	stopWords[10] = "has";
	stopWords[11] = "he";
	stopWords[12] = "in";
	stopWords[13] = "is";
	stopWords[14] = "it";
	stopWords[15] = "its";
	stopWords[16] = "of";
	stopWords[17] = "on";
	stopWords[18] = "that";
	stopWords[19] = "the";
	stopWords[20] = "to";
	stopWords[21] = "was";
	stopWords[22] = "were";
	stopWords[23] = "will";
	stopWords[24] = "with";


	for(int i = 0; i < 25; ++i) {

                stopWordLen[i] = strlen(stopWords[i]);

        }


	while(headNode != NULL) { // until linked list reaches the end

	j = 0; // for resetting index of tweetText

	char * tweetText = malloc(sizeof(char) * 100); // temporary variable for the tweet text


		for(int i = 0; headNode->text[i] != '\n'; ++i) {

			if(headNode->text[i] != ' ' && headNode->text[i] != ',' && headNode->text[i] != ';'
					&& headNode->text[i] != ':' && headNode->text[i] != '?'
					&& headNode->text[i] != '!' && headNode->text[i] != '.') {

				tweetText[j] = headNode->text[i]; // storing char of a word of user tweet in a string tweet text
				j++; // for next index of string tweet text

			}

			else {

				j = 0; // for resetting index of tweet Text

			}

			if(headNode->text[i+1] == ' ' || headNode->text[i+1] == '\n' || headNode->text[i+1] == ','
					|| headNode->text[i+1] == ':' || headNode->text[i+1] == ';'
					|| headNode->text[i+1] == '!' || headNode->text[i+1] == '?'
					|| headNode->text[i+1] == '.') {

				while(k < 25) {

					if(strcmp(tweetText, stopWords[k]) == 0) { // comparing word with stop words

						countWord = countWord + 1; // counting stop words

					}

					k++;
				}

				k = 0;
				memset(tweetText, 0, 100); // emptying tweet text string

			}

		}

		countTweets++;

		headNode = headNode->next; // going to next node

	}

	printf("Across %d tweets, %d stop words were found\n", countTweets, countWord);


}
