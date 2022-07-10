/*
 * main.c
 *
 *  Created on: Jul 9, 2022
 *      Author: Iceman
 */

#include<stdio.h>
#include<stdint.h>
#include"main.h"

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
 * @brief Try string handling in C
 *
 */
void vStringTest(void);

/**
 * @brief Floating Point excersice
 *
 */
void vFloatingPoint(void);

/**
 * @brief Padding example
 *
 */
void vPadding(void);

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
 * @brief Try string handling in C
 *
 */
void vStringTest(void)
{
	char a1 = 'a';
	/*char a2 = 'p';
	char a3 = 'p';
	char a4 = 'l';
	char a5 = 'e';
	char a6 =':';
	char a7 = ')';*/

	printf("The string is: %d\n", a1);
	printf("The string is: %c\n", a1);
}

/**
 * @brief Floating Point excersice
 *
 */
void vFloatingPoint(void)
{
	float magicnumber = 45.78976834578;

	printf("Number = %0.2f\n", magicnumber);
	printf("Number = %0.2e\n", magicnumber);


	double chargE = -1.60217662e-19;

	printf("chargE = %0.28lf\n", chargE);
	printf("chargE = %0.8le\n", chargE);
}

/**
 * @brief Padding example
 *
 */
void vPadding(void)
{
	uint32_t	packetValue;
	printf("Enter the 32bit packet value: ");
	scanf("%X", &packetValue);

	struct Packet packet;
	uint8_t *ptr;

	ptr = (uint8_t*)&packet;

	packet.crc 			= (uint8_t)(packetValue & 0x3);
	packet.status		= (uint8_t)((packetValue >> 2) & 0x1);
	packet.payload		= (uint16_t)((packetValue >> 3) & 0xFFF);
	packet.bat			= (uint8_t)((packetValue >> 15) & 0x7);
	packet.sensor		= (uint8_t)((packetValue >> 18) & 0x7);
	packet.longAddr		= (uint8_t)((packetValue >> 21) & 0xFF);
	packet.shortAddr	= (uint8_t)((packetValue >> 29) & 0x3);
	packet.addrMode		= (uint8_t)((packetValue >> 31) & 0x1);

	printf("crc         : %#x \n",	packet.crc);
	printf("status      : %#x \n",	packet.status);
	printf("payload     : %#x \n",	packet.payload);
	printf("bat         : %#x \n",	packet.bat);
	printf("sensor      : %#x \n",	packet.sensor);
	printf("longAddr    : %#x \n",	packet.longAddr);
	printf("shortAddr   : %#x \n",	packet.shortAddr);
	printf("addrMode    : %#x \n",	packet.addrMode);


	printf("\n\nSize of structure is: %llu\n",	sizeof(packet));

	printf("Memory address            Content \n");
	printf("================================= \n");

	for(uint32_t i = 0; i<sizeof(packet); i++)
	{
		printf("%p    %X\n", ptr, *ptr);
		ptr++;
	}
}

/**
 * @brief Main Function
 *
 * @return int value with error code, 0 = success
 */
int main(void)
{
	vPadding();

    printf("\n\n**************   Press enter to exit this application   **************\n");
	getchar();
	getchar();

	return 0;
}

