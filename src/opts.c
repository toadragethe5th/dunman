/*
	Central code for parsing options
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <character.h>
#include <fileop.h>

int main(int argc, char *argv[])
{
	/* Kind of complicated, but it's easier than writing if statements. */
	if (argc == 1) {
		printf("Error: no options provided. For a complete list, check the manpage.\n");
	}

	switch(argv[1]) {
	case "load":
		/* loadparams(argv[2]); */
	case "heal":
		/* healparams(char *args[]); */
	case "hurt":
		/* hurtparams(char *args[]); */
	case "invadd":
		/* 	This one just simply adds misc. text strings to inventory.
			Should add this to the chara_t type.
		*/
	case "money":
		/* moneyparams(char *args[]); */
	default:
		printf("Error: Illegal option. Exiting.\n"); 

	/* Add spell options */
	return 1;
}
