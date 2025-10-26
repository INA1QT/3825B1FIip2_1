//Lib.
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void main() {


	//Input + check.
	char c;
	char lngth;
	printf("Input length of guessed number.(2-5)\n");
	while (scanf("%c", &lngth) != 1 || ( lngth -= '0' ) > 5 || lngth  < 2) {
		printf("Incorrect input. Please try again.\n");
		while ((c = getchar()) != '\n') {};
	}

	//Creating random 2-5 digit array with unique numbers.
	char t;
	char i = 0;
	char array[5];
	char num[10] = { 0 };
	srand(time(NULL));
	while ( i < lngth ) {
		if (num[t = rand() % 10] == 0 && (t > 0 || i > 0)) {
			num[array[i++] = t] += 1;
		}
	}


	//Game itself
	char swtch;
	char cows;
	do {

		cows = swtch = t = 0;
		while ((c = getchar()) != '\n') {};
		printf("Guess a number. First %d charachters will be taken as your attempt.\n", lngth);

		while (i != 0) {

			if ((c = getchar() - '0') > 9 || c < 0 ) {
				printf("Incorrect innput. Input number of length %d.\n", lngth);
				swtch += 1;
				break;
			}

			else if (c  == array[lngth - i]) {
				++cows;
			}

			else if (num[c] != 0) {
				++t;
			}

			--i;
		}
		if ( swtch == 0 )  {
			printf("There is %d cows and %d oxen.\n", cows, t);
		}
		i = lngth;
	} while (cows != lngth );

	printf("You Won!\n");
}