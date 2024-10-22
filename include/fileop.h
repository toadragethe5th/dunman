#ifndef FILEOP_H
#define FILEOP_H

/*
	@data:
		pointer to character data for character XYZ
	@filename:
		which config file to use
*/
int writeconf(chara_t* data, char filename);

chara_t* readconf(char filename);
