/*
 ============================================================================
 Name        : testMemset.c
 Author      : Daniel Topor
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char    IM_tiny;
typedef IM_tiny  PL_CrcBuffer[16];

PL_CrcBuffer crcNumber;

int main(void)
{

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	memset (crcNumber, 0, sizeof (PL_CrcBuffer));

	crcNumber[20] = 10;

	printf ("\n test: %d \n", crcNumber[16]);

	return EXIT_SUCCESS;
}
