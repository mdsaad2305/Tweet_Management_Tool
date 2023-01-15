OBJS	= mainA3.o createTweet.o displayTweets.o searchTweets.o countStopWords.o deleteTweet.o saveTweets.o loadTweets.o sortID.o addNodeToList.o
CCFLAGS	= -Wall -std=c99
CC	= gcc
DEPS	= headerA3.h

all: main

main: $(OBJS)
	$(CC) $(CCFLAGS) -o A3 $(OBJS)

mainA3.o: mainA3.c $(DEPS)
	$(CC) $(CCFLAGS) -c mainA3.c

createTweet.o: createTweet.c $(DEPS)
	$(CC) $(CCFLAGS) -c createTweet.c

displayTweets.o: displayTweets.c $(DEPS)
	$(CC) $(CCFLAGS) -c displayTweets.c

searchTweets.o: searchTweets.c $(DEPS)
	$(CC) $(CCFLAGS) -c searchTweets.c

countStopWords.o: countStopWords.c $(DEPS)
	$(CC) $(CCFLAGS) -c countStopWords.c

deleteTweet.o: deleteTweet.c $(DEPS)
	gcc -Wall -std=c99 -c deleteTweet.c

saveTweets.o: saveTweets.c $(DEPS)
	$(CC) $(CCFLAGS) -c saveTweets.c

loadTweets.o: loadTweets.c $(DEPS)
	$(CC) $(CCFLAGS) -c loadTweets.c

sortID.o: sortID.c $(DEPS)
	$(CC) $(CCFLAGS) -c sortID.c

addNodeToList.o: addNodeToList.c $(DEPS)
	$(CC) $(CCFLAGS) -c addNodeToList.c

clean:
	rm $(OBJS) A3


