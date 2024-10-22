#include <stdint.h>
#include <stdio.h>

#include <money.h>
#include <character.h>

int moneyadd(char *args[], chara_t* character)
{
	purse_t* purse = character->status->inv->purse;
	switch(args[2]) {
	case "cp":
		purse->cp += 1;
		
