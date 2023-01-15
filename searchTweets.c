#include "headerA3.h"
#include <ctype.h>

int searchTweetsByKeyword(tweet * tweetList) {

	char * keyword;

	int flag = 0;

	tweet * headNode = tweetList;

	keyword = malloc(sizeof(char) * 100);

	printf("Enter a Keyword to search: ");

	scanf(" %s", keyword);

	while(headNode != NULL) { // until linked list reaches the end

		for(int i = 0; headNode->text[i] != '\0' && headNode->text[i] != '\n'; ++i) {

			flag = 0;

			if(headNode->text[i] == tolower(keyword[0]) || headNode->text[i] == toupper(keyword[0])) { // checking if the letter in tweet and first letter of keyword is same

				flag = 1;

				for(int j = 0; keyword[j] != '\0' && keyword[j] != '\n'; ++j) {

					if(headNode->text[i + j] != tolower(keyword[j]) && headNode->text[i + j] != toupper(keyword[j])) { // checking if proceeding chars of keyword and tweet are same

						flag = 0;

						break;
					}

				}

			}


			if(flag == 1) {

				break; // breaking from for loop if keyword is found

			}

		}

		if(flag == 0) {

		}

		else if(flag == 1){

			printf("Match found for '%s': ", keyword); // indicating a match has been found

			for(int k = 0; k < strlen(headNode->user) && headNode->user[k] != '\n'; ++k) { // printing the username of the matched tweet

				printf("%c", headNode->user[k]);

			}

			printf(" wrote: ");
			printf("%s", headNode->text); // printing the matched tweet

		}

		headNode = headNode->next;

	}


	return flag;
}
