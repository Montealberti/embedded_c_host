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
 * @brief Main Function
 *
 * @return int value with error code, 0 = success
 */
int main(void)
{
	vFloatingPoint();

    printf("\n\n**************   Press enter to exit this application   **************\n");
	getchar();

	return 0;
}

