#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdint.h>

#include <status.h>
#include <classdefs.h>

typedef struct chara_t {
	char name;
	size_t xp;
	uint8_t level;
	class_t* class;
	status_t* status;
	// config file pointer
} chara_t;


