/*
 * Author: John Foley
 * URL: http://thisfoley.ninja
 *
 * Date: 10.3.14
 * Last Edit: 10.3.14
 *
 * A concurrent program to generate threads, and use the threads
 * - to determine a list of when the group of people can meet
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

	// Ensure the expected number of arguments for correct execution
	if (argc != 2) {
		
		printf( "Wrong number of arguments, expected 1" );
	} else {
	
		// Open the file in read mode. File name should be first argument
		FILE *file = fopen(argv[1], "r");

		// If FILE returns null or 0, then it couldn't open the file properly
		if (file == 0) {

			printf( "Could not open file\n" );
		} else {
	
		}
	}	

	return 0;
}

