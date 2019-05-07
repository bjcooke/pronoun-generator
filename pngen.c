#include <stdio.h>

#ifdef __linux__
#include <bsd/stdlib.h>
#endif


static char get_consonant( void ) {

	unsigned int c;

	c = arc4random() % 21 + 97;

	switch (c) {

		case 'a':
			c = 'v';
			break;

		case 'e':
			c = 'w';
			break;

		case 'i':
			c = 'x';
			break;

		case 'o':
			c = 'y';
			break;

		case 'u':
			c = 'z';
			break;

		default:
			break;

	}

	return c;

}


int main( void ) {

	char k;

	k = get_consonant();

	printf("%ce/",k);

	if ( arc4random() % 2 ) {
		printf("%cim/",k);
	}
	else {
		printf("%cer/",k);
	}

	if ( arc4random() % 2 ) {
		printf("%cis\n", k);
	}
	else {
		printf("%cers\n", k);
	}

	return 0;

}
