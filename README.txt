Project: Tweet Management Tool


COMPILE AND RUN INSTRUCTIONS:-

a makefile has been submitted along with all the .c files and the header file. compile using make and run 
the program by using "./A3"


COMPONENTS OF MY PROGRAM:-

	header file(headerA3.h):-
		contains all my function prototypes and has been included in all my function files and
		main file

	main file(mainA3.h):-
		contains a menu which allows the user to choose a task to be done by the program. 
		options range from 1-8 and option 9 will allow the user to exit the program

	create tweet file(createTweet.c):-
		option 1 in the menu which allows the user to enter a username and the tweet
		entered by the user. it generates an ID for user which is unique from other
		IDs.
		userID = (ASCII value of all characters in username) + (length of tweet)

	display tweets file(displayTweets.c):-
		option 2 in the menu which displays all the tweets created by the user or
		loaded from a file by the user

	search Tweets file(searchTweets.c):-
		option 3 in the menu prompts the user to enter a keyword and then searched the word across
		all the tweets and displays the tweet along with the username when a match is found

	stop word file(countStopWord.c):-
		option 4 in the menu which goes through all the tweets in the linked list and displays the
		total number of stop words across all the tweets created and loaded by the user

	delete tweet file(deleteTweet.c):-
		option 5 in the menu allows the user to delete a tweet from the linked list if he/she so
		desires. it displays the total number of tweets and asks the user for an input to select
		which tweet to delete.

	save tweets file(saveTweets.c):-
		option 6 in the menu prompts the user to input a filename where he/she wants to save and 
		store the tweets. The tweets then get stored in that file and the user can access that file 
		anytime. the tweet storage should follow a CSV format so a ".csv" should be typed after
		typing in filename.

	load tweets file(loadTweets.c):-
		option 7 in the menu prompts the user to input a filename. that file is then accessed and 
		used to copy all the tweets and then stored in the linked list which can then be used in other
		options mentioned before.

	sort ID file(sortID.c):-
		option 8 in the menu uses bubble sort to sort the tweets in ascending order of their IDs.
		This can be checked by first entering option 8, then suing option 2 to display the tweets.		

		
	add node file(addNodeToList.c):-
		This function is used to traverse the linked list and then add the node that was either
		created(using option 1) or loaded(using option 7) at the end of the linked list.
		this function is used in both createTweet.c file and loadTweets.c file.

	makefile:-
		this file makes it easier to run the program with a simple command of "make", followed 
		by "./A3".



IMPROVEMENTS FOR FUTURE:-

	my program is not modified to prevent memory leaks and other errors which can be spotted by 
	using valgrind. 
	adding more detailed comments to make my program more understandable to the user
