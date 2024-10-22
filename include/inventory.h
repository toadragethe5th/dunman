#ifndef INVENTORY_H
#define INVENTORY_H

#include <stdint.h>

typedef struct purse_t {
	uint16_t cp; 
	uint16_t sp;
	uint16_t ep;
	uint16_t gp;
	uint16_t pp;
} purse_t;

typedef struct inv_t {
	char inv[1024];
	purse_t* purse;
} inv_t;
