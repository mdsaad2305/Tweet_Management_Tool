#include "headerA3.h"

void saveTweetsToFile(tweet * tweetList) {

	char * fileName = malloc(sizeof(char) * 100);

	tweet * headNode = tweetList;

	FILE * fp;

	printf("Enter a filename where you would like to store your tweets:");

	scanf("%s", fileName); // asking user for filename

	fp = fopen(fileName, "w"); // opening file in write mode

	fseek(fp, 0, SEEK_END);

	while(headNode != NULL) {

	fprintf(fp, "%d,", headNode->id); // printing user id in file

	for(int i = 0; i < strlen(headNode->user) && headNode->user[i] != '\n'; ++i) { // printing username in file

		fprintf(fp, "%c", headNode->user[i]);

	}

	fprintf(fp, ",");

	fprintf(fp, "%s", headNode->text); // printing user tweet in file

	headNode = headNode->next;

	}

}
