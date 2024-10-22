#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <fileop.h>
#include <character.h>

int writeconf(chara_t* data, char filename)
{
	FILE* out;
	out = fopen(filename, "wb");
	if out == NULL 
	{
		fprintf(stderr, "Error creating file handler.\n"); /* Watch for potential bug here */
		exit(1);
	}
	
	int flag = 0;
	flag = fwrite(data, sizeof(chara_t), 1, out); /* Looks weird, but should work, so I could care less */
	if (flag) 
	{
		printf("File written succesfully.\n");
	} else {
		fprintf(stderr, "Error writing to file.\n");
	}
	
	fclose(out);

	return 0;
}

chara_t* readconf(char filename) 
{
	FILE* in;
	in = fopen(filename, "rb");
	if in == NULL
	{
		fprintf(stderr, "Error creating file handler.\n"); /* Another potential bug here, check back in during testing */
		exit(1);
	}

	chara_t loaded;
	fread(&loaded, sizeof(loaded), 1, in);
	
	chara_t* final = &loaded;
	return final;
}
