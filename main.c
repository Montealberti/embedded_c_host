/*
 * main.c
 *
 *  Created on: Jul 9, 2022
 *      Author: Iceman
 */


#include<stdio.h>
#include<stdint.h>

/**
 * @brief Function Prototypes Section
 * **********************************
 */

/**
 * @brief sizeof command with the different data types of the host/target
 *
 */
void vSizeOfDataType(void);

/**
 * @brief sizeof command with the different data types of the host/target
 *
 */
void vSizeOfDataType(void)
{
    printf("Size of CHAR \t\t= %lld byte(s)\n",  	 sizeof(char) );
	printf("Size of SHORT \t\t= %lld byte(s)\n", 	 sizeof(short) );
	printf("Size of INT \t\t= %lld byte(s)\n",   	 sizeof(int) );
	printf("Size of LONG \t\t= %lld byte(s)\n",  	 sizeof(long) );
	printf("Size of LONG LONG \t= %lld byte(s)\n", sizeof(long long) );
}

/**
 * @brief Main Function
 *
 * @return int value with error code, 0 = success
 */
int main(void)
{
    vSizeOfDataType();

    printf("\n\n**************   Press enter to exit this application   **************\n");
	getchar();

	return 0;
}

