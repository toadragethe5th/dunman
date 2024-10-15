#ifndef STATUS_H
#define STATUS_H

#include <stdint.h>
#include <stdbool.h>

#include <spelltypes.h>
#include <inventory.h>

/*
	Made as a struct because it's easier to construct.
*/
typedef struct effects_t {
	bool blinded;
	bool charmed;
	bool deafened;
	bool frightened;
	bool grappled;
	bool incapacitated;
	bool invisible;
	bool parylyzed;
// } effects_t;



typedef struct health_t {
	size_t max_health;
	size_t temp_health;
	size_t health_cur;
	uint8_t hitdice;
	uint8_t dicetype;
} health_t;

typedef struct status_t {
	health_t* health;
	slots_t* slots;
	inv_t* inv;
	effects_t* effects;
} status_t;
