#include "headerA3.h"
#include <stdlib.h>


void sortID (tweet ** head) {

		int count = 0;
		int replacement = 0;

		char * nameReplacement = malloc(sizeof(char) * 51);
		char * textReplacement = malloc(sizeof(char) * 141);

		tweet * countNode = *head;

		tweet * newNode;

		tweet * temp;

		countNode = *head;

		while(countNode != NULL) {

			count = count + 1; // finding number of tweets

			countNode = countNode->next;

		}

		for(int i = 0; i < count; ++i) {

		temp = *head;

		while(temp != NULL) {

			newNode = temp;

			while(newNode->next != NULL) { // using bubble sort to sort the tweets in ascending order of their user IDs

				if(newNode->id > newNode->next->id) {

					replacement = newNode->id;
					newNode->id = newNode->next->id;
					newNode->next->id = replacement;

					strcpy(nameReplacement, newNode->user);
					strcpy(newNode->user, newNode->next->user);
					strcpy(newNode->next->user, nameReplacement);

                                        strcpy(textReplacement, newNode->text);
                                        strcpy(newNode->text, newNode->next->text);
                                        strcpy(newNode->next->text, textReplacement);

				}

				newNode = newNode->next;

			}

			temp = temp->next;

		}

		}


}
